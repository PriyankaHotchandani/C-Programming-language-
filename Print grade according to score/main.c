#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    char grade;
    printf("Enter the score\n");
    scanf("%d",&score);
    if (score >=90)
    {
        grade='A';
    }
    else if (score >=80)
    {
        grade='B';

    }
    else if (score >=70)
    {
        grade='C';
    }
    else
    {
        grade='D';
    }
    printf("GRADE IS %c",grade);
    return 0;
}
