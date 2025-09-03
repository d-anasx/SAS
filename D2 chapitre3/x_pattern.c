#include <stdio.h>
#include <time.h>



int main() {
    
    int n,i,j;
    



    printf("enter a num : ");
    scanf("%d",&n);

    
    for ( i=0 ; i < 2*n-1 ; i++ ){


        for(j=0 ; j < 2*n-1 ; j++) {
            
            if( j==i || j == 2*n - i-2 ){

                printf("*");
            }
            else{
                printf(" ");
            }
    };
        
        printf("\n");
        
    }

    
    
    return 0;
}
