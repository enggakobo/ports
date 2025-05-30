--- base/process/internal_linux.h.orig	2025-05-07 06:48:23 UTC
+++ base/process/internal_linux.h
@@ -144,6 +144,9 @@ TimeDelta ClockTicksToTimeDelta(int64_t clock_ticks);
 // arguments to the lambda.
 template <typename Lambda>
 void ForEachProcessTask(base::ProcessHandle process, Lambda&& lambda) {
+#if BUILDFLAG(IS_BSD)
+  return;
+#else
   // Iterate through the different threads tracked in /proc/<pid>/task.
   FilePath fd_path = GetProcPidDir(process).Append("task");
 
@@ -167,6 +170,7 @@ void ForEachProcessTask(base::ProcessHandle process, L
     FilePath task_path = fd_path.Append(tid_str);
     lambda(tid, task_path);
   }
+#endif
 }
 
 }  // namespace internal
