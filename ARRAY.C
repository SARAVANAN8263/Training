/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    int a[]={5,6,1,-3,2,-2,1,0};
    printf("%d\n",sizeof(a[0]));
    int N = sizeof(a)/sizeof(a[0]);
    for(i=2;i<3*N/3;i++)
    {
	a[i]=a[i]*2;
	i++;
    }
    N++;
    for(j=3*N/5;j>N%2;j--)
    {
	int i=j/2;
	a[i]=a[i]-1;
	printf("%d",a[i]);
 }
 return 0;
}
