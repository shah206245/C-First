#include <stdio.h>

int main() {
 int a,b;
 
printf("Enter a : ");
scanf("%d",&a);

printf("Enter b : ");
scanf("%d",&b);

// Arithmetic operator
printf("Addition is %d + %d = %d\n",a,b,a+b);
printf("Subtraction is %d - %d = %d\n",a,b,a-b);
printf("Multiplication is %d * %d = %d\n",a,b,a*b);
printf("Division is %d / %d = %d\n",a,b,a/b);
printf("Modulus is %d %% %d = %d\n",a,b,a%b);

// Relation operator
printf("Less than %d < %d : %d\n",a,b,a<b);
printf("Greater than %d > %d : %d\n",a,b,a>b);
printf("Less than equal to %d <= %d : %d\n",a,b,a<=b);
printf("Greater than equal to %d >= %d : %d\n",a,b,a>=b);
printf("equal to %d == %d : %d\n",a,b,a==b);
printf("not equal to %d != %d : %d\n",a,b,a!=b);

//



    return 0;
}