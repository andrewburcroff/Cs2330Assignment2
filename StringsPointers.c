

// January 18, 2011, CS 223
// Pointers and strings and arrays
//  Part II
#include <stdio.h>
#include <stdlib.h>
void swap (char  *, char *); // prototype for swap

int main (int argc, char *argv[])
{int i,j; // array subscripts
// can't write on "ABCDE"  so ....
 // Declare a little character array
char Str [6] = {'A','B','C','D','E', (char) 0 };
                // N.B. this is same as "ABCDE"
                        // with  NULL at the end
// Fun with command line arguments

printf("%s is the name of my executable \n", argv[0]);

printf("%u is the number of arguments\n",argc);

printf("The second arg seen as decimal integer is %d\n",atoi(argv[1]));

//
printf("An array of characters %s to change\n", Str);
      i =0 ; j = 4;
            while (i < j)
             { swap(&Str[i++],&Str[j--]);}
 printf("After reverse via subscripts %s\n",Str);

char * Sptr, * sptr; // a declaration of a variable of data
                           // type 'pointer to char'
        //NB -- both * are necessary !!
                // Points nowhere in particular at initialization
Sptr = Str; // NOW it points at whatever str points at
sptr = (char *)Str; // address of first array location is now pointed to by sptr

        // Reverse string via pointers
        // First point to last character
printf("An array of characters %s to change\n", Str);

        for ( ;((*Sptr)!= (char)0);(Sptr)++)  ;
                // NB empty loop body  -- by end of this loop Sptr points at null.

        Sptr--; // and now Sptr points at 'E'
                // Let's prove that
printf("Pointer Values %p, %p \n",sptr, Sptr);
printf("Point at  %c, %c \n",(*sptr),(* Sptr));

printf("Before %s\n",Str);
                // and now reverse string
        while (sptr < Sptr)
        { swap( sptr,Sptr);sptr++; Sptr--;}
printf("After reverse via pointers %s\n",Str);
//


// And now let's use pointer arithmetic
        i= 0 ; j= 4;
sptr = (char *) Str; // point to front of string
        while (i < j)
           {swap (sptr+i,sptr+j);i++;j--;}
printf("After reverse via pointer arithmetic %s\n",Str);
}

// The general swap of characters by reference variables
void swap(char *X, char *Y)
 { char temp;
    temp = * X; // 'dereferencing X'
    (*X)     = * Y;
    *Y  = temp;
}









