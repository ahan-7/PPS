// selection sort
#include<stdio.h>
int main (){
    int A[] = {5, 4, 3, 2, 1};
    int n = sizeof(A) / sizeof(A[0]);
    int i, j, p, s;

    for (i = 0; i < n-1 ; i++) {
        p = i;
        s = A[i];
        for (j = i + 1; j < n; j++) {
            if (A[j] < s) {
                s = A[j];
                p = j;
            }
        }
        int swap = A[i];
        A[i] = A[p];
        A[p] = swap;
    }

    // Print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}