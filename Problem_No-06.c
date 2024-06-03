//Write a C program that prompts the user to input an integer and determines
 //whether it is a prime number or not
#include <stdio.h>

int main() {
    int number;
    int isPrime = 1; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number <= 1) {
        printf("Not a prime number.\n");
    } else {
        
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}
