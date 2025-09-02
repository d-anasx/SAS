#include <stdio.h>

int main() {
   float v ;
   int r = 10;
   float p = 3.14 ; 

   v = 4.0f/3.0f * p * r * r * r ; 

   printf("%f", v);
   

    return 0;
}


// 4/3 return 1.00000
// mais 4.0f/3.0f return 1.333333
