// stampa gli elementi di un array in ordine inverso 

#include <stdio.h>

int main() {

    int array[8]={1,2,3,4,5,6,7,8};
    int length = sizeof(array)/sizeof(array[0]);
    int i = length -1;


    //for ( i = 0; i > length; i--){
        //printf("%d\n", length);
    //}

    while (i >= 0){
        printf("%d\n", array[i]);
        i--;
    }
    
    
    return 0;
}