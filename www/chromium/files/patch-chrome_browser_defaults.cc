--- chrome/browser/defaults.cc.orig	2025-04-04 08:52:13 UTC
+++ chrome/browser/defaults.cc
@@ -31,7 +31,7 @@ const bool kAlwaysCreateTabbedBrowserOnSessionRestore 
 const bool kShowHelpMenuItemIcon = false;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const bool kScrollEventChangesTab = true;
 #else
 const bool kScrollEventChangesTab = false;
