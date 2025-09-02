#include <stdio.h>

int main() {
   float init ;
   float total ;
 

   printf("entrze un montant : ");
   scanf("%f", &init);

   total = init + init * 0.05 ; 

   printf("%f", total);
   

    return 0;
}