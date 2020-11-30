#include <stdio.h>
#include <stdlib.h>

void checkNumber(int a);

int main()
{
    int n;
    printf ("Enter a number\n");
    scanf ("%d", &n);

    checkNumber(n);

    return 0;

}

void checkNumber(int n)
{
    if(n%2==0)
    { printf("The number is even");  }
    else
    printf("The number is odd");
}
