// soap two no.s using recursion.
#include <stdio.h>

void swap(int *a, int *b, int step) {
   if (step == 0) {
      return;
   }
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
   swap(a, b, step - 1); // Recursive call to demonstrate recursion
}

int main() {
   int x, y;
   printf("Enter two numbers: ");
   scanf("%d %d", &x, &y);

   printf("Before swapping: x = %d, y = %d\n", x, y);
   swap(&x, &y, 1); // Step is 1 to perform the swap once
   printf("After swapping: x = %d, y = %d\n", x, y);

   return 0;
}