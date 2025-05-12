//find the largest element from array using recursion.
#include <stdio.h>

int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }
    int max = findLargest(arr, n - 1); 
    return (arr[n - 1] > max) ? arr[n - 1] : max; 
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

    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}