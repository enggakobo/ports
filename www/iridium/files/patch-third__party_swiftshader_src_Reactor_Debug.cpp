--- third_party/swiftshader/src/Reactor/Debug.cpp.orig	2025-05-07 06:48:23 UTC
+++ third_party/swiftshader/src/Reactor/Debug.cpp
@@ -46,7 +46,7 @@ namespace {
 
 bool IsUnderDebugger()
 {
-#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__)
+#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
 	static bool checked = false;
 	static bool res = false;
 
