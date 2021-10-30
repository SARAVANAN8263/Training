#include <stdio.h>
int main()
{
    int a,b=0,i;
    printf("Enter the Number:");
    scanf("%d",&a);
    if(a==0||a==1)
    {
        printf("number is prime");
    }
    else
    {
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
        if(b==2)
        {
            printf("number is prime");
        }
        else
        {
            printf("not a prime number");
        }
        break;
    }
    }
    return 0;
}
