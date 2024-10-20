#include <stdio.h>
int main() {
    int n;
    int i;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
    printf("I fattori primi di %d sono: ", n);
    for (i = 2; n > 1; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    return 0;
}