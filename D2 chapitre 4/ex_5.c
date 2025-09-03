#include <stdio.h>

int main() {
   float x ;
   float total ;

 

   printf("entrez x : ");
   scanf("%f", &x);

   float x5 = x*x*x*x*x;
   float x4 = x*x*x*x;
   float x3 = x*x*x;
   float x2 = x*x;

   total = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6 ;

   

   printf("%f", total);
   

    return 0;
}