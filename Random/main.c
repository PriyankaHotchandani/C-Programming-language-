#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a, &b);
    //c=a>b?a:b;
    if (a>b)
    {
        printf("Larger number is %d", a);
    }
    else
    {
        printf("Larger number is %d", b);
    }

    return 0;
}
