/*
// This program uses system() to invoke the dir command (MS-DOS),
// but changes all letters written to the screen to lowercase.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define   MAXSTRING   100

int main(void)
{
   char   command[MAXSTRING], *tmp_filename;
   int    c;
   FILE   *ifp;

   tmp_filename = tmpnam(NULL);
   sprintf(command, "dir > %s", tmp_filename);
   system(command);
   ifp = fopen(tmp_filename, "r");
   while ((c = getc(ifp)) != EOF)
      putchar(tolower(c));
   remove(tmp_filename);
   return 0;
}
