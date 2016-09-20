#include <stdlib.h>      // an include statement
#include <stdio.h>      // an include statement
#include <string.h>     // an include statement
#include <arpa/inet.h>  // an include statement

void divalg(unsigned int Value, unsigned int Base)
{
    int i = 0;//Intializing i integer to 0.
    int digit;//Intializing digit.
    char Buffer[60];//Setting buffer to 60.
    int value = Value;//store value for later use
    char Table[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};// Table of the char of 16 bits.
    while(Value != 0)//Starting on while loop.
    {
      digit = Value % Base;//Finding the remainder for the value and base.
      Value = Value / Base;//Dividing the value and base to get a new value.
      Buffer[i] = digit;//Given the certian i value, place it in digit.
      i++;//Increasing i.
    }

    if(Base != 16){
      char otherbase[10] = {Table[Buffer[5]],Table[Buffer[4]],Table[Buffer[3]],Table[Buffer[2]],Table[Buffer[1]],Table[Buffer[0]]};//Printing the base answer for certian bases.
      printf("In Base %d the value is %s\n",Base,otherbase);//Prints out the translation answer as otherbase.
    }
    if(Base == 16){//the print out for HEX only
    char test[10] = {Table[Buffer[5]],Table[Buffer[4]],Table[Buffer[3]],Table[Buffer[2]],Table[Buffer[1]],Table[Buffer[0]]};//Printing the base answer for certian bases.
    printf("In Hex the value is %s\n",test);//Prints out the translation answer as HEX.
  }
}

void IP(int value)
{
  if(value >= 256)//Statement saying if valueis greater that 256.
  {
    unsigned char bytes[4];//Setting the unsigned char bytes to 4.
   for(int i=0; i<4; i++) //Start of a for loop
   {
      bytes[i] = (value >> i*8) & 0xFF;//Changing value to IP.
   }
   printf("The IP address is %d.%d.%d.%d\n", bytes[3], bytes[2], bytes[1], bytes[0]);//Prints off IP address.
}
else
  {
  printf("In IP the value is 0.0.0.%u\n",value);//Prints out the IP value.
  }
}

void maskAndShift(unsigned Value)//maskAndShift method.
{
  for (unsigned k = 1u << 10; k != 0; k >>= 1)//For loop of the base 2 converstion of maskAndShift.
      {
        putchar((Value & k) ?  '1' : '0');//Converts everything into 1s and 0s.
      }
        printf(" is the output in base 2\n");//Prints out the maskAndShift part of base 2.
}

int main(int argc, char *argv[])
{
  for(int g = 2; g < argc; g++)
  {
    if (atoi(argv[g]) == 2)
    {
      maskAndShift(atoi(argv[1]));
    }
    else if(atoi(argv[g]) == 256)
    {
      IP(atoi(argv[1]));
    }
    else if((atoi(argv[g]) == 4) || (atoi(argv[g]) == 8) || (atoi(argv[g]) == 16))
    {
      divalg(atoi(argv[1]),atoi(argv[g]));
    }
  }
}
