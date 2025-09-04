#include <stdio.h>


int counter(int number) {
    int count = 0;
    if (number == 0) return 1; 
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
};

int main() {
//    int p1; 
//    int p2; 
//    int p3; 
//    int p4; 
//    int p5; 
   int totalDigits = 0 ;
   int arr[5];
   
   

 
 do {

    printf("entrez ISBN : ");
//    scanf("%d-%d-%d-%d-%d", &p1,&p2,&p3,&p4,&p5);

   for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); 
    }

//    int arr[] = {p1,p2,p3,p4,p5};

   int size = sizeof(arr) / sizeof(arr[0]);
   
   for (int i = 0; i < size; i++) {
       totalDigits += counter(arr[i]);
    }

 }
 while ( (arr[0]!=978 && arr[0]!=979) || totalDigits!=13 );
   



   printf("Prefixe GS1 : %d\nIdentifiant de groupe : %d\nCode de l editeur : %d \nNumero d article : %d\nChiffre de controle : %d", arr[0],arr[1],arr[2],arr[3],arr[4]);
   

    return 0;
}





// printf("entrez l Identifiant de groupe : ");
//    scanf("%d", &p2);

// printf("entrez le Code de l editeur : ");
//    scanf("%d", &p3);

// printf("entrez le Numéro  d article : ");
//    scanf("%d", &p4);

// printf("entrez le Chiffre de controle : ");
//    scanf("%d", &p5);