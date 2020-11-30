#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("enter first integer\n");
    scanf("%d",&a);
    printf("enter second integer\n");
    scanf("%d",&b);
    d=a+b;
    c=3*(a+b);
    if (a==b)
    {
       printf("%d",c);
       }
    else
    {
       printf("their sum is %d",d);
    }

    return 0;
}
