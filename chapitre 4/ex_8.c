#include <stdio.h>

int main() {
   float init ;
   float taux ;
   float pm ;
   printf("entrez un montant : ");
   scanf("%f", &init);
   printf("entrez le taux d interet : ");
   scanf("%f", &taux);
   printf("entrez le pm : ");
   scanf("%f", &pm);   
   taux =  (taux/100) /12 ;
   
for(int i=1 ; i<=3 ; i++){
    init = init-pm + (init * taux);
 printf(" %d mois : %.2f \n", i , init);

}
   
   

    return 0;
}