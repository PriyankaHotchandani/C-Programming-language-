#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
printf("Enter 3 numbers\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b)
{
    if(a>c)
    {
        printf("The greatest number is %d",a);
    }
    else
    {
        printf("The greatest number is %d",c);
    }
}
else
{
    if(b>c)
    {
        printf("The greatest number is %d",b);
    }
    else
    {
        printf("The greatest number is %d",c);
    }
}

    return 0;
}
