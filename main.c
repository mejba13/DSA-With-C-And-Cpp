#include <stdio.h>
#include <limits.h>

// Function to find the second largest element in the array
int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Update first and second if a new largest is found
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        // Update second if a new second largest is found
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest found
}

int main() {
    int arr[] = {12, 35, 1, 10, 29, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int second_largest = findSecondLargest(arr, n);
    
    if (second_largest == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
