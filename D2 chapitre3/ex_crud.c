#include <stdio.h>


struct student {
        char Fname[10];
        char Lname[10];
        int notes[5];
    };



int main() {

    int choice ;

    struct student S1 = {
        "anas",
        "djamaoui",
        {18,18,18,18,18}
        
    };

    struct student S2 = {
        "abde",
        "ez",
        {17,18,18,18,18}
        
    };

    // int maxStd = 100;
    int s =2 ;
    // int *s1 = &s;
    struct student A[s];  //malloc
    
    A[0] = S1;
    A[1] = S2;

while(1){

    printf("1 => afficher toutes les etudiants\n2 => ajouter un etudiant\n3 => modifier un etudiant\n4 => supprimer un etudiant\n5 => aficher les notes d un etudiant\n\nFaire le choix : ");

    scanf("%d",&choice);

    int size = sizeof(A) / sizeof(A[0]);

    if (choice == 1){

        
        
        for (int i=0 ; i<size ; i++ ){

            printf("nom : %s\nprenom : %s \n", A[i].Fname , A[i].Lname );

            printf("notes : ");

            for (int j=0; j<5 ; j++){

            printf("%d ", A[i].notes[j] );
                
            };
            printf("\n**********************************\n");
            
        

    }
    }

    else if (choice == 2){
        s++;
        printf("enter un nom : ");
        scanf("%s", A[s].Fname);

        printf("enter un prenom : ");
        scanf("%s", A[s].Lname);

        printf("enter les notes separes par des espaces : ");
        for (int i = 0; i < 5; i++) {
        scanf("%d", &A[s].notes[i]); 
    }


    }

    else if (choice == 3){

        int id ;

        printf("enter l ID de l etudiant : ");
        scanf("%d", &id);
        
        printf("modifier le nom : ");
        scanf("%s", A[id].Fname);

        printf("modifier le prenom : ");
        scanf("%s", A[id].Lname);

        printf("enter les notes separes par des espaces : ");
        for (int i = 0; i < 5; i++) {
        scanf("%d", &A[id].notes[i]); 
    }


    }


}
    


    return 0;
}
