#include <stdio.h>

int main() {
    
    const int numElementos = 10;

    
    int numero;
    int contNumerosEntre30e90 = 0;

    
    for (int i = 0; i < numElementos; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        
        if (numero >= 30 && numero <= 90) {
            contNumerosEntre30e90++;
        }
    }

    
    printf("\n Quantidade de números entre 30 e 90: %d\n", contNumerosEntre30e90);

    return 0;
}

