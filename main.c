#include <stdio.h>
#include <math.h>

int main(void) {
  double x, roundDown = 0.0, roundUp = 0.0, squareRoot = 0.0, squared = 0;
  
  printf("\nEnter a number with decimals: ");
    scanf("%lf",&x);
  printf("\n----------------------------------------------------\n");
  
  printf("\nRounding Functions\n\n");
  printf("The original value of 'x' is: %.2f\n",x);    
    
  roundDown = floor(x);
  printf("The value rounded down is: %.2f\n", roundDown);
  
    roundUp = ceil(x);
  printf("The value rounded up is:: %.2f\n", roundUp);
  printf("\n----------------------------------------------------\n");

  printf("\nRoot and Exponentiation Functions\n\n");
  printf("The original value of 'x' is: %.2f\n",x);
    
  squareRoot = sqrt(x);
  printf("The value of the square root is: %.2f\n",squareRoot);
  
    squared = pow(x, 2);
  printf("The squared value is: %.2f\n", squared); 
  printf("\n----------------------------------------------------\n");
  
  
  
    
  return 0;
}
