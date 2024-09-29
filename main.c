#include <stdio.h>

int main() {
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2;

    // Richiesta della prima data
    printf("Inserisci la prima data (GG MM AAAA):\n ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);

    // Richiesta della seconda data
    printf("Inserisci la seconda data (GG MM AAAA):\n ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);

    // Confronto delle date
    if (anno1 > anno2) {
        printf("La prima data e' piu' recente.\n");
    } else if (anno1 < anno2) {
        printf("La seconda data e' piu' recente.\n");
    } else {
        if (mese1 > mese2) {
            printf("La prima data e' piu' recente.\n");
        } else if (mese1 < mese2) {
            printf("La seconda data e' piu' recente.\n");
        } else {
            if (giorno1 > giorno2) {
                printf("La prima data e' piu' recente.\n");
            } else if (giorno1 < giorno2) {
                printf("La seconda data e' piu' recente.\n");
            } else {
                printf("Le date sono uguali.\n");
            }
        }
    }

    return 0;
}