#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    {


    for (i=0;i<=n;i++)
    {
        for (j=1;j<=((2*i)+1);j++)
            printf("* ");
            printf("\n");
    }

    return 0;
}
}
