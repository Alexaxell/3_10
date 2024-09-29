#include <stdio.h>

int main(void) {
        int eta;
        float prezzo_biglietto;
        printf("Inserisci l'età del visitatore: ");
        scanf("%d", &eta);
        if (eta < 5) {
            prezzo_biglietto = 0.0;
        } else if (eta <= 10) {
            prezzo_biglietto = 1.0;
        } else if (eta <= 17) {
            prezzo_biglietto = 1.5;
        } else if (eta <= 26) {
            prezzo_biglietto = 2.0;
        } else {
            prezzo_biglietto = 3.0;
        }
        printf("L'importo del biglietto da pagare è: %.2f euro\n", prezzo_biglietto);


    return 0;
}
