#include <stdio.h>

int main() {
   int x ;
   int B20 = 0 ;
   int B10 = 0 ;
   int B5  = 0;
   int B1  = 0;

   printf("entrez un montant : ");
   scanf("%d", &x);

 
    B20 = x / 20;
    x = x- (20 * B20);
    B10 = x / 10;
    x =x - ( 10 * B10);
    B5 = x / 5;
    x = x - (5 * B5);
    B1 = x / 1;
    x = x - B1;


 printf("Billets de 20$ : %d \nBillets de 10$ : %d \nBillets de 5$ : %d \nBillets de 1$ %d \n", B20 , B10 , B5 , B1 );
   

    return 0;
}