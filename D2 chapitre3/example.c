#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointeur vers le premier élément du tableau
    printf("%p",ptr);
    for (int i = 0; i < 5; i++) {
        printf("Valeur: %d, Adresse: %p\n", *(ptr + i), (ptr + i));
    }

    return 0;
}
