#include <stdio.h>

int main()
{

    // Area of square
    double side, area;
    printf("Enter a side : ");
    scanf("%lf", &side);
    area = side * side;
    printf("The area of a square is : %lf", area);

    // Area of circle
    double radius;
    printf("\n\nEnter radius : ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    printf("Area of a circle : %lf", area);

    // Area of cube
    int n, Area;
    printf("\n\nEnter n : ");
    scanf("%d", &n);
    Area = n * n * n;
    printf("Area of cube is : %d", Area);

    // perimeter of rectangle
    int lenght, width;
    printf("\n\nEnter lenght : ");
    scanf("%d", &lenght);

    printf("Enter width : ");
    scanf("%d", &width);

    Area = 2 * (lenght + width);
    printf("perimeter of rectangle is : %d", Area);

    return 0;
}