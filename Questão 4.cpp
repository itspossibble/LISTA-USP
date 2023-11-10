#include <stdio.h>

int main() {
    
    const int numClientes = 15;

    
    char nomesClientes[numClientes][50];
    float valoresCompras[numClientes];

    
    printf("Informe o nome e o valor de compras para cada cliente:\n");
    for (int i = 0; i < numClientes; i++) {
        printf("Cliente %d:\n", i + 1);

       
        printf("Nome: ");
        scanf("%s", nomesClientes[i]);

        
        printf("Valor de compras: R$ ");
        scanf("%f", &valoresCompras[i]);
    }

    
    printf("\n Bonus para cada cliente:\n");
    for (int i = 0; i < numClientes; i++) {
        float bonus;

        
        if (valoresCompras[i] < 1000.0) {
            bonus = 0.10 * valoresCompras[i];
        } else {
            bonus = 0.15 * valoresCompras[i];
        }

        
        printf("%s: R$ %.2f\n", nomesClientes[i], bonus);
    }

    return 0;
}

