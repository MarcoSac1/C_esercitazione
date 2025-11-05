//calcolare la somma dei valori che si trovano in posizioni pari
#include <stdio.h>

int main() {

    int i;
    int somma = 0;
    //int totale = somma;

    for ( i= 0; i <= 10; i++){

        if(i %2 == 0){
            somma = i+somma;
        }
        
    }
    printf("la somma di tutti i valori pari al interno del ciclo e' %d", somma);
    
    return 0;
}