//Conta dei numeri pari e dispari. Dato un array di interi, contare quanti sono pari e quanti sono dispari
#include <stdio.h>
#define DIM 10

int main() {
    int array[DIM];
    int i;
    int length = sizeof(array)/sizeof(array[0]);
    int pari = 0;
    int dispari = 0;

    for (i = 0; i < length; i++) {
        printf("inserisci il %d numero intero per l'array: \n", i+1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);
    
    return 0;
}