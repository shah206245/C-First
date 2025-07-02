#include <stdio.h>

int main()
{ 

    int num;
    printf("Enter a Number between 1 - 12 :");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("This month is January\n");
    }
    else if (num == 2)
    {
        printf("This month is February\n");
    }
    else if (num == 3)
    {
        printf("This month is March\n");
    }
    else if (num == 4)
    {
        printf("This month is April\n");
    }
    else if (num == 5)
    {
        printf("This month is May\n");
    }
    else if (num == 6)
    {
        printf("This month is June\n");
    }
    else if (num == 7)
    {
        printf("This month is July\n");
    }
    else if (num == 8)
    {
        printf("This month is August\n");
    }
    else if (num == 9)
    {
        printf("This month is September\n");
    }
    else if (num == 10)
    {
        printf("This month is October\n");
    }
    else if (num == 11)
    {
        printf("This month is November\n");
    }
    else if (num == 12)
    {
        printf("This month is December\n");
    }
    else
    {
        printf("input is wrong\n");
    }

    double a, b;
    char operator;

    printf("Enter a ");
    scanf("%lf", &a);
    printf("Enter Operator ('+,-,*,/):");
    scanf(" %c", &operator);
    printf("Enter b ");
    scanf("%lf", &b);
    if (operator== '+')
    {
        printf("The Sum of a + b is : %lf", a + b);
    }
    else if (operator== '-')
    {
        printf("The Sub of a - b is : %lf", a - b);
    }
    else if (operator== '*')
    {
        printf("The Multy of a * b is : %lf", a * b);
    }
    else if (operator== '/')
    {
        printf("The Div of a / b is : %lf", a / b);
    }
    return 0;
}