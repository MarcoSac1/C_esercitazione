// ricerca di un elemento chiedere un numero al utente e verificare se e presente nel array

#include <stdio.h>
#define DIM 4

int main() {
    int array[DIM];
    int i;
    int length = sizeof(array)/sizeof(array[0]);
    int vUtente = 0;
    int trovato = 0;

    for (i = 0; i < length; i++) {
        printf("inserisci il %d numero intero per l'array: \n", i+1);
        if (scanf("%d", &array[i]) != 1) return 1;
    }

    printf("inserisci il numero da verificare: \n");
    if (scanf("%d", &vUtente) != 1) return 1;

    for (i = 0; i < length; i++) {
        if (array[i] == vUtente) {
            trovato = 1;
            break;
        }
    }

    if (trovato) {
        printf("%d il numero e' presente nell'array\n", vUtente);
    } else {
        printf("%d non e' presente nell'array\n", vUtente);
    }

    return 0;
}