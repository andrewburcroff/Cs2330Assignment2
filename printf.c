#include <stdio.h>
// demo of various printf, argc , argc, format descriptor, table lookup tricks
int main(int argc, char *argv[])
{char buffer[8]; buffer[0] = (char) 0;
int i;
int X = 0xfacecafe;
char *table = "0123456789ABCDEF";
if (argc > 1) {printf("Hooray i tested the value of argc\n %u",argc);
               for (i=0;i<argc;i++) printf("argument %u %s\n",i,argv[i]);
              }
buffer[5] = (char) 0; // null at end of buffer

	printf("%x %u %d NEGATIVE ONE ? \n",-1, 3-4, X);
 for (i=7;i>=0;i--)
{buffer[i] = table[X & 0xF];
X = X>>4;} // & is logical AND
printf("%s\n",&buffer[0]); 
}
