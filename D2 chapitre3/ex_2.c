#include <stdio.h>

int main() {
    int n , reversed = 0 , rest ;
    printf("enter a number : ");
    scanf("%d",&n);
    
    while (n!=0)
    {
        rest = n % 10 ;
        reversed = reversed * 10 + rest ; 
        n /= 10;

    }

    printf("Reversed number: %d\n", reversed);


    return 0;
}
