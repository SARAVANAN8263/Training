#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i;
clrscr();
printf("Enter The Water Level:");
scanf("%d",&a);
printf("Enter The Max Water Level:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
printf("water is %d level\n",i);
if(i==b)
{
printf("Reached %d Max Level",i);
}
}
for(i=b;i>=a;i--)
{
printf("Water is %d Level\n",i);
{
if(i==0)
{
printf("Tank Empty %d",i);
}
}
}
return 0;
getch();
}