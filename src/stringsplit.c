#include "stringsplit.h"
#include<string.h>

 void stringsplit(char str[], char *arr[]){
  const char s[2] = "_";
   char *token;

   /* get the first token */
   token = strtok(str, s);
   int i=0;
   /* walk through other tokens */
   while( token != NULL ) {
      //printf( " %s\n", token );
                arr[i]=token;
      token = strtok(NULL, s);
      i++;
   }
   arr[i]=NULL;
}
