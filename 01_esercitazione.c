//1.1. Somma degli elementi
//Dato un array din numeri interi, calcolare e stampare la somma di tutti gli elementi.

#include <stdio.h>
#define DIM 10



int main() {
    
    int a[DIM];
    int i;
    int somma=0;

    for (i = 0; i < DIM; i++){
        printf("inserisci il %d numero intero per l'array a \n",i+1);
        scanf("%d", &a[i]);
        somma=somma+a[i];
    } 
    
    printf("La somma degli elementi e' %d\n", somma);
    return 0;
}