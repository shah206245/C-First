#include <stdio.h>

int main()
{

    // check adult or not
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult") : printf("Not Adult");

    // marks grade
    int marks;

    printf("Enter Marks : ");
    scanf("%d", &marks);

    marks > 90 && marks <= 100 ? printf("Grade A+ ") : marks > 80 && marks <= 90 ? printf("Grade A ")
                                                   : marks > 70 && marks <= 80   ? printf("Grade B ")
                                                   : marks > 50 && marks <= 70   ? printf("Grade C ")
                                                   : marks > 30 && marks <= 50   ? printf("Grade D ")
                                                                                 : printf("Failed");

    return 0;
}