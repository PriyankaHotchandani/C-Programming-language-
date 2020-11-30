#include <stdio.h>
#include <stdlib.h>

void swapNumbers(int *, int *);

int main()
{
    int n1, n2, swap;
    printf ("Enter the two numbers to be swapped\n");
    scanf ("%d %d", &n1, &n2);
    printf("Before swapping: n1=%d and n2=%d\n",n1,n2);

    swapNumbers(&n1, &n2);

    printf("Swapped result: n1=%d and n2=%d",n1,n2);
    return 0;

}

void swapNumbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
