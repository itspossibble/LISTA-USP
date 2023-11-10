#include <stdio.h>

int main() {
    int opcao;
    float num1, num2;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1. Adicao\n");
        printf("2. Subtração\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Saida\n");
        
        printf("Escolha uma operacaoo (1-5): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite dois numeros para adicao:\n");
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("Resultado da adicao: %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Digite dois numeros para subtracao:\n");
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("Resultado da subtracao: %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Digite dois numeros para multiplicacao:\n");
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("Resultado da multiplicacao: %.2f\n", num1 * num2);
                break;

            case 4: // Divisão
                printf("Digite dois numeros para divisao:\n");
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2 (nao pode ser zero): ");
                scanf("%f", &num2);

                if (num2 != 0) {
                    printf("Resultado da divisao: %.2f\n", num1 / num2);
                } else {
                    printf("Nao e possível dividir por zero.\n");
                }
                break;

            case 5: // Saída
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao inválida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 5);

    return 0;
}

