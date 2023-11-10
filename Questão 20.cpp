#include <stdio.h>
#include <limits.h>

int main() {
    
    int valor, maior = INT_MIN, menor = INT_MAX;

    
    do {
        printf("Digite um valor inteiro positivo (ou 0 para encerrar): ");
        scanf("%d", &valor);

        
        if (valor < 0) {
            printf("Valor negativo. Por favor, digite um valor positivo.\n");
        } else if (valor > 0) {
            
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    } while (valor != 0);

    
    if (maior != INT_MIN && menor != INT_MAX) {
        printf("\nMaior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
    } else {
        printf("\nNenhum valor positivo foi digitado.\n");
    }

    return 0;
}

