/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define THIS 0*04
#define THAT 0*03

int main()
{
   unsigned char va=0*00;
   va |=THIS;
   va |=THAT;
   if(va==THIS&THAT)
 printf("%d",THAT);
 if(va&THAT<<2)
 printf("%d",THIS);
    return 0;
}
