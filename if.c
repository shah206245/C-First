#include <stdio.h>
int main()
{
    // even odd
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    // marks check
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100)
    {
        printf("Passed");
    }
    else if (marks >= 0 && marks <= 30)
    {
        printf("Failed");
    }
    else
    {
        printf("Enter wrong marks");
    }
    // marks grade
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A+");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade A");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Grade B");
    }
    else if (marks < 30 && marks >= 0)
    {
        printf("Grade C");
    }
    else
    {
        printf("fail");
    }

    // lower case or upper case
    char ch;

    printf("Enter Character : ");
    scanf("%c", &ch);

    if (ch > 'a' && ch < 'z')
    {
        printf("lower Case \n");
    }
    else if (ch > 'A' && ch < 'Z')
    {
        printf("Upper Case");
    }
    else
    {
      printf("Not english letter");
    }
    return 0;
}