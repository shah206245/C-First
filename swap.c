#include <stdio.h>

int main() {
   int  a,b;
   printf("Enter a : ");
   scanf("%d",&a);
   printf("Enter b : ");
   scanf("%d",&b);
   
   int  shah = a;
   a = b;
   b = shah;

printf("swapping is a = %d , b = %d",a,b);
    return 0;
}