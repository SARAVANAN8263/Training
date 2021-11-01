#include <stdio.h>

int main()
{
    int a=0,b=1,c,count,num;
    scanf("%d",&num);
    printf("%d %d ",a,b);
    count=2;
    while(count<=num)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        count++;
    }
    return 0;
}
