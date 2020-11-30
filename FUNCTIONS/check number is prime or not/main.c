#include <stdio.h>
#include <conio.h>

int checkPrime (int);

int main()
{
   int n;
    printf("Enter the number you want to check\n");
    scanf("%d",&n);
    checkPrime(n);

    return 0;
}

int checkPrime (int n)
{
    int i, count;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count ++;
        }

    }
    if (count==2)
    printf("The number is prime");
    else
    printf("The number is not prime");
}
