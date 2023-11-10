#include <stdio.h>

int main() {
    
    const int numPessoas = 7;

    
    int idade;
    float peso;
    int contPesoMais90 = 0;
    int somaIdades = 0;

    
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d (em quilos): ", i + 1);
        scanf("%f", &peso);

        
        if (peso > 90.0) {
            contPesoMais90++;
        }

        
        somaIdades += idade;
    }

    
    float mediaIdades = (float)somaIdades / numPessoas;

    
    printf("\nResultados:\n");
    printf("Quantidade de pessoas com mais de 90 quilos: %d\n", contPesoMais90);
    printf("Média das idades das sete pessoas: %.2f anos\n", mediaIdades);

    return 0;
}

