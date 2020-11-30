#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the maximum limit\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i/j==0)
                break ;

                }
                 printf("%d\n",i);
        }
        return 0;
    }


