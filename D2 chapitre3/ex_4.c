#include <stdio.h>
#include <time.h>



int main() {
    int note ;
    
    do {
        printf("entrez une note entre 0 et 100 : ");
        scanf("%d",&note);
        
    }
    while (note>100 || note<0);
    
    int devideNote = note / 10;

    switch (devideNote){
        case 9  :
        printf("A");
        break;

        case 10 :
        printf("A");
        break;

        case 8 :
        printf("B");
        break;

        case 7 :
        printf("C");
        break;

        case 6 :
        printf("D");
        break;

        default : 
        printf("F");

    }
}
