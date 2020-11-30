#include <stdio.h>
#include <stdlib.h>

int addNumbers(int a, int b); //function declaration

int addNumbers(int a, int b)  //function definition
{
    int result;
    result=a+b;
    return result;
}

int main()
{
    int n1, n2, sum;
    printf ("Enter two numbers");
    scanf ("%d %d", &n1, &n2);

    sum=addNumbers(n1, n2); //function call
    printf("sum=%d",sum);
    return 0;

}


