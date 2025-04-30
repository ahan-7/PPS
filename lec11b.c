//Binary Search
#include<stdio.h>
int main(){
   
 int A[5]={1,2,3,4,5};
  int key;
    int low=0, high=4, mid;
    printf("Enter the key to be searched: ");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid]){
            printf("Key found at index %d\n",mid);
            return 0;
        }
        else if(key<A[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("Key not found\n");
    return 0;
}