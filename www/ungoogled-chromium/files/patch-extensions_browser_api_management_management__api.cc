--- extensions/browser/api/management/management_api.cc.orig	2025-05-06 12:23:00 UTC
+++ extensions/browser/api/management/management_api.cc
@@ -286,7 +286,7 @@ bool PlatformSupportsApprovalFlowForExtensions() {
 #if BUILDFLAG(IS_CHROMEOS)
   // ChromeOS devices have this feature already shipped.
   return true;
-#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(
       supervised_user::kEnableExtensionsPermissionsForSupervisedUsersOnDesktop);
 #else
