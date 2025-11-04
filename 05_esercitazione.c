// ricerca di un elemento chiedere un numero al utente e verificare se e presente nel array

#define DIM 4

int main() {
    int array[DIM];
    int i;
    int length = sizeof(array)/sizeof(array[0]);
    int vUtente = 0;

    for (i = 0; i < length; i++) {
        printf("inserisci il %d numero intero per l'array: \n", i+1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < length; i++) {
        printf("inserisci il numero da verificare: \n");
        scanf("%d",&vUtente);
        }if(array[i]==vUtente){
        printf("%d il numero e' presente nel array", &vUtente);
        }else{
        printf("il numero non e presente arrivederci");
    }


    return 0;
}