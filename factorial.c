#include <stdlib.h>
#include <stdio.h>

int factorial(int num1);
int permutation(int num1, int num2);
int combination(int num1, int num2);

int main (int argc,char * argv[]) {
    char choice = 'F';
    printf("Factorial, Permutation or Combination?"
      "\n Enter 'F', 'P' or 'C':");
    scanf("%c",&choice);

    int num1,num2,result;

    if (choice == 'F' || choice == 'f') {
      printf("Enter a number:");
      scanf("%d",&num1);
      result = factorial(num1);
    } else {
      printf("Enter two numbers:");
      scanf("%d %d",&num1,&num2);
      if (choice == 'C'||choice == 'c') {
         result = combination(num1,num2);
      } else {
        result = permutation(num1,num2);
      }
    }
    printf("Result is equal to %d\n",result);
    return EXIT_SUCCESS;
}

int factorial(int num1){
     int result = 0;
     int counter = num1-1;

     while (counter >= 1) {
       num1 = num1*counter;
       counter --;
     }
     result = num1;
     return result;
}

int permutation(int num1, int num2){
     int result = 0;
     int counter = num1;
     int first = num1+1;
     while (counter>first-num2) {
       num1 = num1*(counter-1);
       counter --;
     }

     result = num1;
     return result;
}

int combination(int num1, int num2){
     int result = 0;
     int counter = num1;
     int first = num1+1;
     while (counter>first-num2) {
       num1 = num1*(counter-1);
       counter --;
     }

     counter = num2;
     while (counter>1) {
       num2 = num2*(counter-1);
       counter --;
     }

     result = num1/num2;
     return result;
}
