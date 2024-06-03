//Create a C program that checks whether a given string entered by the user is
 //a palindrome or not
#include <stdio.h>

int main() {
    char input[100];
    int length = 0;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", input);


    while (input[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
