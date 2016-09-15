// how to use malloc ? 
// R. Trenary , Sept 15, 2015
// demo of malloc
#include <stdio.h>
#include <stdlib.h>  //notice that includes can be found with man page
#include <string.h>
int main()
{char * S="a string \n";

char *Scpy = malloc( strlen(S)+1); // planning for a null

strncpy(Scpy,S,strlen(S)+1);  // and copying the null 
Scpy[4]='!';
printf("%s",Scpy);
free(Scpy);
}