Author: Ludovic Rousseau <rousseau@debian.org>
Description: fix a spelling typo
--- a/jhead.c
+++ b/jhead.c
@@ -1663,7 +1663,7 @@
     if (ExifXferScrFile){
         if (FilterModel || ApplyCommand){
             ErrFatal("Error: Filter by model and/or applying command to files\n"
-            "   invalid while transfering Exif headers");
+            "   invalid while transferring Exif headers");
         }
     }
 
