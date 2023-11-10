#include <stdio.h>

int main() {
    
    int canal, pessoasAssistindo, totalPessoasAssistindo = 0;
    int pessoasCanal4 = 0, pessoasCanal5 = 0, pessoasCanal7 = 0, pessoasCanal12 = 0;

    
    while (1) {
        printf("Digite o numero do canal (4, 5, 7, 12) ou ZERO para encerrar: ");
        scanf("%d", &canal);

        if (canal == 0) {
            break;
        }

        printf("Digite o numero de pessoas assistindo: ");
        scanf("%d", &pessoasAssistindo);

        totalPessoasAssistindo += pessoasAssistindo;
        switch (canal) {
            case 4:
                pessoasCanal4 += pessoasAssistindo;
                break;
            case 5:
                pessoasCanal5 += pessoasAssistindo;
                break;
            case 7:
                pessoasCanal7 += pessoasAssistindo;
                break;
            case 12:
                pessoasCanal12 += pessoasAssistindo;
                break;
            default:
                printf("Canal invalido. Tente novamente.\n");
                break;
        }
    }

    // Calcular e exibir a porcentagem de audiência para cada canal
    if (totalPessoasAssistindo > 0) {
        printf("\nPorcentagem de audiencia por canal:\n");
        printf("Canal 4: %.2f%%\n", (float)pessoasCanal4 / totalPessoasAssistindo * 100);
        printf("Canal 5: %.2f%%\n", (float)pessoasCanal5 / totalPessoasAssistindo * 100);
        printf("Canal 7: %.2f%%\n", (float)pessoasCanal7 / totalPessoasAssistindo * 100);
        printf("Canal 12: %.2f%%\n", (float)pessoasCanal12 / totalPessoasAssistindo * 100);
    } else {
        printf("\nNenhuma pessoa estava assistindo. Nenhuma porcentagem de audiencia calculada.\n");
    }

    return 0;
}

