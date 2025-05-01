//Bubble sort
#include<stdio.h>
int main(){
 int a[10]={1,2,3,4,5,6,7,8,9,10},i,j,temp;

 // Bubble sort algorithm
 for(i=0;i<10;i++)
 {
  for(j=0;j<10-i-1;j++)
  {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }

 // Print the sorted array
 printf("The sorted array is: ");
 for(i=0;i<10;i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");

 return 0;
}