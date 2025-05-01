#include<stdio.h>
int main(){
    int arr[]={29,25,9,10,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 1; i < n; i++) { 
        int c = arr[i];
        int p = i - 1;
        while (p >= 0 && arr[p] > c) {
                arr[p + 1] = arr[p];
                p--;
        }
        arr[p + 1] = c; 
    }
     
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}