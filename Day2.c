// A sample piece of code to demonstrate printf format descriptors
// And pass by reference and ... 
#include <stdio.h> // the PROTOTYPES ... for standard library 
void swap(int *, int *u);// prototype 
int main()
{int X=-1;
  int P=42; int Q = 65;
  int * Iptr; Iptr = &P;// created a pointer to int and gave it valid value
                             // NB int *X, Y; does not declare two pointers.
printf("Negative 1 seen 3 ways %d %u %d %x\n",Q,-1,2-3,-1);
// string literal is really the address where those 
// characters are put in memory char * is the data type 
// and a null terminated string is required 
// Format string contains: literal, format descriptor,escapes
	swap(Iptr,&Q);// try this without the &
	printf("Negative 1 seen 3 ways %d %u %d %x\n",Q,-1,2-3,-1);

}
void swap(int * I1, int* I2) // two addresses of ints i
{int temp;					// '*' means 'dereference'

 temp = *I1; // dereference on the right i.e. the value
 *I1 = *I2; // I1 is dereferenced for left hand value
 *I2 = temp;
}