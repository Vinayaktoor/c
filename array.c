#include <stdio.h>

int findMax(int arr[], int size) {
    // Assume the first element is the maximum
    int max = arr[0];

    // Iterate through the array to find the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the findMax function to get the maximum
    int maximum = findMax(arr, size);

    // Display the maximum number
    printf("The maximum number in the array is: %d\n", maximum);

    return 0;
}
