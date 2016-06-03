#include <stdlib.h>
#include <stdio.h>

int factorial(int num1);
int permutation(int num1, int num2);
int combination(int num1, int num2);
void testFactorial();
void testPermutations();
void testCombinations();

int main (int argc,char * argv[]) {
    
    testFactorial();
    testPermutations();
    testCombinations();

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
     result = 1;
     if (num1 != 0) {
        int counter = num1-1;

         while (counter >= 1) {
           num1 = num1*counter;
           counter --;
         }
         result = num1;
     } else {
         result = 1;
     }
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
void testFactorial {
 
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);
    assert(factorial(5) == 120);
    assert(factorial(6) == 720);
    assert(factorial(7) == 5040);
    assert(factorial(8) == 40320);
    assert(factorial(9) == 362880);

    printf("Factorial tests Passed!\n");    
}
void testPermutations {

    assert(permutation(1, 1) == 1);
    assert(permutation(10, 5) == 30240);
    assert(permutation(7, 5) == 2520);
    assert(permutation(9, 3) == 504);
    assert(permutation(5, 5) == 120);
    assert(permutation(11, 5) == 55440);
    assert(permutation(51, 2) == 2550);
    assert(permutation(12, 4) == 11880);
    assert(permuation(6, 4) == 360);
    assert(permutaion(101, 3) == 999900);    
    
    printf("Perms tests Passed!\n");    
}

void testCombinations {
    
    assert(combination(1, 1) == 1);
    assert(combination(10, 5) == 252);
    assert(combination(21, 8) == 319770);
    assert(combination(9, 3) == 84);
    assert(combination(55, 55) == 1);
    assert(combination(12, 6) == 924);
    assert(combination(18, 9) == 48620);
    assert(combination(12, 4) == 495);
    assert(combination(6, 5) == 6);
    assert(combination(101, 3) == 16650);    
    
    printf("Combs tests Passed!\n");    
}
