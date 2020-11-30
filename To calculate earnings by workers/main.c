#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter numbers of hours\n");
    scanf("%d",a);
    if (a<=40)
    {
        printf("The worker will be paid for time and a half");
    }
    else
    {
        printf("The worker will not be paid");
    }
    return 0;
}
