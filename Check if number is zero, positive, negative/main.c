#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("The given number is positive");
    }
    else if (a==0)
    {
        printf("The given number is zero");
    }
    else
    {
        printf("The given number is negative");
    }
    return 0;
}
