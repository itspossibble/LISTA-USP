#include <stdio.h>

int main() {
    int numero;
    int somaPositivos = 0, somaNegativos = 0;

    while (1) {
        printf("Digite um numero (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            somaPositivos += numero;
        } else {
            somaNegativos += numero;
        }
    }

    int somaTotal = somaPositivos + somaNegativos;

    printf("\nResultados:\n");
    printf("Soma dos numeros positivos: %d\n", somaPositivos);
    printf("Soma dos numeros negativos: %d\n", somaNegativos);
    printf("Soma total: %d\n", somaTotal);

    return 0;
}

