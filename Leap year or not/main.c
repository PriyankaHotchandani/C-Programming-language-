#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a year\n");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}
