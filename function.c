// one functions
/*# include <stdio.h>

void printshah();

int main(){
    printshah();
    printshah();
    printshah();
    return 0 ;
}
void printshah(){
    printf("Hello\n");
    printf("My name is Shah Hasan\n");
}*/

// two function

/*#include <stdio.h>
void namaste ();
void bonjure();

int main() {
  char ch;
  printf("Enter i for india &  f for frech : ");
  scanf("%c",&ch);

  if (ch =='i'){
      namaste();
  }else if (ch=='b'){
      bonjure();
  }else{
      printf("Wrong input");
  }

    return 0;
}
void namaste (){
    printf("Namaste India ");
}
void bonjure (){
    printf("Bonjure French ");
}*/

/*#include <stdio.h>
int sum(int a , int b);
int main() {
    int a,b;
    
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
int s = sum(a, b);
printf("sum is :  %d",s);
    return 0;
}
int  sum(int a, int b){
    return a+b;
}*/

/*#include <stdio.h>
void printTable(int n);
int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}
void printTable(int n)
{
    
    for (int i = 1; i <= 10; i++){ 
        
    printf("%d \n", i * n);
    }
}*/