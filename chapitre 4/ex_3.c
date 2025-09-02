#include <stdio.h>

int main() {
   float v ;
   float r ;
   float p = 3.14 ; 

   printf("donnez une valeur de rayon : ");
   scanf("%f", &r);

   v = 4.0f/3.0f * p * r * r * r ; 

   printf("%f", v);
   

    return 0;
}