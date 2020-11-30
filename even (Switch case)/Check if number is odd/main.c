#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char o;
    printf("Enter the expression\n");
    scanf("%d" "%c" "%d",&a,&o,&b);
    switch (o)
    {
    case '+':
        printf("%d\n",a+b);
      break;
    case '-':
        printf("%d\n",a-b);
      break;
    case '*':
        printf("%d\n",a*b);
      break;
    case '/':
        if (b==0)
        {printf("Division by 0\n");
            }
        else
        {
            printf("%d\n",a/b);
        }
        break;
    default:
        printf("Unknown operator\n");
        break;
    }

    return 0;
}
