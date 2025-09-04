#include <stdio.h>


struct data {
        char debut[10];
        char arrivee[10];
        int converted;
    };

int convertToMin(int h ,int m ){

    return  h*60 + m ;
}

int main() {

    int hour,minutes;

    printf("entrer une heure de depart (xxhxx) : ");
    scanf("%dh%d",&hour,&minutes);
    int n = convertToMin(hour,minutes);

    
    struct data A[8] ;


    


    int min =2000;
    int rest , result;
   


    struct data h1 = {"8h00","10h16",480};
    struct data h2 = {"9h43","11h52",583};
    struct data h3 = {"11h19","1h31",679};
    struct data h4 = {"12h47","3h00",767};
    struct data h5 = {"2h00","4h08",840};
    struct data h6 = {"3h45","5h55",945};
    struct data h7 = {"7h00","9h20",1140};
    struct data h8 = {"9h45","11h58",1305};

    A[0] = h1;
    A[1] = h2;
    A[2] = h3;
    A[3] = h4;
    A[4] = h5;
    A[5] = h6;
    A[6] = h7;
    A[7] = h8;


    for (int i=0 ; i<8 ; i++ ){

        rest = n -A[i].converted;
        (rest<0) ? rest=-rest : rest;

        if (rest<min)  {min=rest ; result = i ;}  ;

    }

    printf("l heure de depart est : %s , et l heure de arrivee est : %s ", A[result].debut , A[result].arrivee );
    


    return 0;
}
