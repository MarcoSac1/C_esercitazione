// Media aritmetica . Calcolare la media dei valori contenuti in un array.
#include <stdio.h>
#define DIM 10



int main() {
    
    int a[DIM];
    int i;
    int somma=0;
    float media=0;


    for (i = 0; i < DIM; i++){
        printf("inserisci il %d numero intero per l'array a \n",i+1);
        scanf("%d", &a[i]);
        somma=somma+a[i];
    } 
    media=somma/DIM;
    printf("La media degli elementi e' %.2f\n", media);
    return 0;
}