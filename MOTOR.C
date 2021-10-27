#include<stdio.h>
#include<conio.h>
int a;
void main()
{
clrscr();
printf("Enter The Water level: ");
scanf("%d",&a);
if(a<=10)
printf("Motor is ON");
else if(a>=11&&a<=90)
printf("Motor is Running");
else if(a>=91&&a<=100)
printf("Motor is off");
else
printf("Invalid Number");
getch();
}
