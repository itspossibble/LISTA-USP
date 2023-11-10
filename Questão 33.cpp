#include <stdio.h>

int main() {
    int opcao;

    while (1) {
        // Apresentar o menu de op��es
        printf("\nMenu de Opcoes:\n");
        printf("1. Media Aritmetica\n");
        printf("2. Media Ponderada\n");
        printf("3. Sair\n");

        // Receber a op��o do usu�rio
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificar a op��o escolhida
        switch (opcao) {
            case 1: // M�dia Aritm�tica
                {
                    float nota1, nota2;
                    printf("Digite a primeira nota: ");
                    scanf("%f", &nota1);
                    printf("Digite a segunda nota: ");
                    scanf("%f", &nota2);
                    float mediaAritmetica = (nota1 + nota2) / 2;
                    printf("Media Aritmetica: %.2f\n", mediaAritmetica);
                }
                break;
            
            case 2: // M�dia Ponderada
                {
                    float nota1, nota2, nota3, peso1, peso2, peso3;
                    printf("Digite a primeira nota: ");
                    scanf("%f", &nota1);
                    printf("Digite o peso da primeira nota: ");
                    scanf("%f", &peso1);
                    printf("Digite a segunda nota: ");
                    scanf("%f", &nota2);
                    printf("Digite o peso da segunda nota: ");
                    scanf("%f", &peso2);
                    printf("Digite a terceira nota: ");
                    scanf("%f", &nota3);
                    printf("Digite o peso da terceira nota: ");
                    scanf("%f", &peso3);
                    float mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
                    printf("Media Ponderada: %.2f\n", mediaPonderada);
                }
                break;

            case 3: // Sair do programa
                printf("Programa encerrado.\n");
                return 0;

            default: // Op��o inv�lida
                printf("Opcao invalida. Por favor, escolha uma op��o valida.\n");
        }
    }

    return 0;
}

