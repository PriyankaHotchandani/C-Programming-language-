#include <stdio.h>
#include <conio.h>

long int toBin (int);

int main()
{
   long int bin;
   int deci;
    printf("Enter the decimal number\n");
    scanf("%d",&deci);
    bin=toBin(deci);
    printf("The binary number is : %ld\n", bin);

    return 0;
}

long int toBin(int deci)
{
    long int bin=0,remainder,i=1;
    while(deci!=0)
    {
        remainder=deci%2;
        deci=deci/2;
        bin=bin+(remainder*i);
        i=i*10;
    }
    return bin;
}
