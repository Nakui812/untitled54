#include <stdio.h>

int main() {
    int r, o;

    // Chiediamo all'utente di inserire le dimensioni della matrice
    printf("Inserisci il numero di righe (r): ");
    scanf("%d", &r);
    printf("Inserisci il numero di colonne (o): ");
    scanf("%d", &o);


    int Matrix[r][o];

    // Chiediamo all'utente di inserire gli elementi della matrice
    printf("Inserisci gli elementi della matrice A (%d righe e %d colonne):\n", r, o);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < o; j++) {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    } 

    // Creiamo un array B per contenere la somma delle righe
    int somma[r];

    // Calcoliamo la somma per ogni riga e la memorizziamo in B
    for (int i = 0; i < r; i++) {
        somma[i] = 0;  // Inizializziamo la somma della riga
        for (int j = 0; j < o; j++) {
            somma[i] += Matrix[i][j];  // Sommiamo gli elementi della riga
        }
    }

    // Visualizziamo il risultato
    printf("Somma degli elementi di ciascuna riga:\n");
    for (int i = 0; i < r; i++) {
        printf("Somma della riga %d: %d\n", i, somma[i]);
    }

    return 0;
}
