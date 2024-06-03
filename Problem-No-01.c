//Write a C program to calculate the simple interest for a loan or investment,
 //given the principal amount, rate of interest, and time period in years

#include <stdio.h>

int main() {
    double principal, rate, time, simple_interest;
    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = $%.2lf\n", simple_interest);

    return 0;
}
