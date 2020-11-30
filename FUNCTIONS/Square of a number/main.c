#include <stdio.h>
#include <stdlib.h>

int squareNumber(int a); //function declaration

int main()
{
    int n1, square;
    printf ("Enter the number to be squared");
    scanf ("%d", &n1);

    square=squareNumber(n1); //function call
    printf("square=%d",square);
    return 0;

}

int squareNumber(int a) //function definition
{
    return (a*a);
}
