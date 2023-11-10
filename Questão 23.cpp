#include <stdio.h>

int main() {
    // Variáveis
    int idade, opiniao, totalOtimo = 0, totalRegular = 0, totalBom = 0;
    float somaIdadesOtimo = 0.0;

    // Loop para receber as informações de cada espectador
    for (int i = 0; i < 15; i++) {
        printf("Informe os dados do espectador %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Opiniao (otimo=3, bom=2, regular=1): ");
        scanf("%d", &opiniao);

        // Processar a opinião
        switch (opiniao) {
            case 3: //Otimo
                somaIdadesOtimo += idade;
                totalOtimo++;
                break;
            case 2: // Bom
                totalBom++;
                break;
            case 1: // Regular
                totalRegular++;
                break;
            default:
                printf("Opiniao invalida. Tente novamente.\n");
                i--; // Decrementar i para repetir a entrada para o mesmo espectador
                break;
        }
    }

    // Calcular e exibir as médias e as estatísticas
    if (totalOtimo > 0) {
        float mediaIdadesOtimo = somaIdadesOtimo / totalOtimo;
        printf("\n Media das idades das pessoas que responderam 'Otimo': %.2f anos\n", mediaIdadesOtimo);
    } else {
        printf("\n Nenhuma pessoa respondeu 'Ótimo'.\n");
    }

    printf("Quantidade de pessoas que responderam 'Regular': %d\n", totalRegular);

    if (totalOtimo + totalBom > 0) {
        float percentualBom = (float)totalBom / (totalOtimo + totalBom) * 100.0;
        printf("Percentual de pessoas que responderam 'Bom': %.2f%%\n", percentualBom);
    } else {
        printf("Nenhuma pessoa respondeu 'Bom' entre os espectadores analisados.\n");
    }

    return 0;
}

