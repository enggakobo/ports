--- chrome/browser/chrome_browser_main_posix.cc.orig	2025-05-07 06:48:23 UTC
+++ chrome/browser/chrome_browser_main_posix.cc
@@ -81,7 +81,7 @@ void ExitHandler::ExitWhenPossibleOnUIThread(int signa
     // ExitHandler takes care of deleting itself.
     new ExitHandler();
   } else {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     switch (signal) {
       case SIGINT:
       case SIGHUP:
