//Design a program that takes an array of integers as input. The program
//should find the second smallest and second largest numbers in the array. If
//the second smallest number is even, add 2 to it. if it's odd, subtract 2.
//Similarly, if the second largest number is even, double it. if it's odd, halve it.
//Finally, print the modified array

#include <stdio.h>
#include <limits.h>

void findSecondSmallestAndLargest(int arr[], int n, int *secondSmallest, int *secondLargest) {
    int smallest = INT_MAX, largest = INT_MIN;
    *secondSmallest = INT_MAX;
    *secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != smallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }
    }
}

void modifySecondSmallestAndLargest(int arr[], int n) {
    int secondSmallest, secondLargest;

    findSecondSmallestAndLargest(arr, n, &secondSmallest, &secondLargest);

    for (int i = 0; i < n; i++) {
        if (arr[i] == secondSmallest) {
            if (secondSmallest % 2 == 0) {
                arr[i] += 2;
            } else {
                arr[i] -= 2;
            }
        }

        if (arr[i] == secondLargest) {
            if (secondLargest % 2 == 0) {
                arr[i] *= 2;
            } else {
                arr[i] /= 2;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    modifySecondSmallestAndLargest(arr, n);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
