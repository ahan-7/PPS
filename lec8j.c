//pascals Triangle
/*                            1
      1                    ¹C₀  ¹C₁
     1  1                ²C₀  ²C₁   ²C₂
   1  2  1             ³C₀   ³C₁   ³C₂   ³C₃ 
  1  3  3  1         ⁴C₀    ⁴C₁   ⁴C₂   ⁴C₃  ⁴C₄
                                                 */
  #include<stdio.h>
  int main (){
 
    int i, j,k, c;
    for (i = 0; i < 5; i++) // Start from 0 for Pascal's Triangle
    {
        c = 1; // Initialize c to 1 for each row

        for(k=0; k < 5-i; k++) // Adjust loop to center the triangle
        {
            printf(" "); // Print spaces for alignment
        }
        for (j = 0; j <= i; j++) // Adjust loop to include 0
        {
            printf("%d ", c); // Use proper format specifier
            c = c * (i - j) / (j + 1); // Update c correctly
        }
        printf("\n");
    }
    
return 0;
}   