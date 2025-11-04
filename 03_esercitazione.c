//3. Valore massimo e minimo. Trovare e stampare il valore massimo e minimo dell'array.

#include <stdio.h>
#define DIM 10


int main() {

    int array[DIM];
    int i;
    int min;
    int max;
    int length = sizeof(array)/sizeof(array[0]);

    for ( i = 0; i < length; i++){
        printf("inserisci il %d numero intero per l'array a \n",i+1);
        scanf("%d", &array[i]);        
        if(i==0){
            min=array[i];
            max=array[i];
        }
        if(array[i] < min) min=array[i];
        if(array[i] > max) max=array[i];

    }

    printf("Minimo = %d \n",min);
    printf("Massimo = %d \n",max);

    
    return 0;
}