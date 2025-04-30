//Searching Algorithm - Linear Search , Binary Search
// Linear Search
#include<stdio.h>

int main(){
    int A[5] = {1, 2, 3, 4, 5};
    int i, key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++) {
        if (A[i] == key) {
            printf("Key found at index %d\n", i);
            return 0;
        }
    }
    printf("Key not found\n");
return 0;
}
     // Return -1 if the key is not found

