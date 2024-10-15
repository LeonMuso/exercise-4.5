#include <stdio.h>

int main(void) {
        int numeroProdotti, i /* =1*/;
        float costo, totale = 0;
        printf("Quanti prodotti hai acquistato? ");
        scanf("%d", &numeroProdotti);
        for (i = 1; i <= numeroProdotti; i++) {
            printf("Inserisci il costo del prodotto %d: ", i);
            scanf("%f", &costo);
            totale += costo;
        }
       /* while (i <= numeroProdotti) {
            printf("Inserisci il costo del prodotto %d: ", i);
            scanf("%f", &costo);
            totale += costo;
            i++;
        }*/
        printf("Il totale da pagare e': %.2f\n", totale);

        return 0;
    }

