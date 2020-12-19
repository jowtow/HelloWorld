#include <stdio.h>


int IsDivisibleBy(int num, int divisor){
        return num % divisor == 0;
}


int main(){
        int input;

        printf("Welcome to FizzBuzz!\n");
        printf("Enter a number: ");
        scanf("%d", &input);

        if(IsDivisibleBy(input, 3) && IsDivisibleBy(input, 5)){
                printf("FizzBuzz\n");
        }
        else if(IsDivisibleBy(input, 3)){
                printf("Fizz\n");
        }
        else if(IsDivisibleBy(input, 5)){
                printf("Buzz\n");
        }

        return 0;
}