// Develop a C program that calculates the sum of digits of a non-negative
 //integer entered by the user. The sum of digits is obtained by adding up all
// the individual digits of the number
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any number to find the sum of its digits: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
