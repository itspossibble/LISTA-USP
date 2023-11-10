#include <stdio.h>

int main() {
    
    int idade, somaIdades = 0, quantidadeIdades = 0;

    
    do {
        printf("Digite a idade (digite 0 para encerrar): ");
        scanf("%d", &idade);

        
        if (idade != 0) {
            somaIdades += idade;
            quantidadeIdades++;
        }
    } while (idade != 0);

    
    if (quantidadeIdades > 0) {
        float mediaIdades = (float)somaIdades / quantidadeIdades;
        printf("\nMédia das idades: %.2f anos\n", mediaIdades);
    } else {
        printf("\nNenhuma idade foi digitada.\n");
    }

    return 0;
}

