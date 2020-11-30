#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[7]={1,2,3,4,5,6,7},i;
    printf("Enter all the numbers : \n");
    for (i=0;i<7;i++)
    {
        printf("M[%d]=%d\n",i,M[i]);
        }
    printf("From end\n");
    for (i=6;i>=0;i--)
    {
        printf("M[%d]=%d\n",i,M[i]);
    }

    return 0;
}
