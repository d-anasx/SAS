#include <stdio.h>

int main() {
   float x ;
   float total ;

 

   printf("entrez x : ");
   scanf("%f", &x);

   

   total = ((((3 * x + 2 )* x - 5) * x - 1) * x + 7) * x - 6 ;

   

   printf("%f", total);
   

    return 0;
}