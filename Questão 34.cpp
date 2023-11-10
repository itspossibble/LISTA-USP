#include <stdio.h>

int main() {
    // Variáveis
    int voto;
    int totalLula = 0, totalBolsonaro = 0, totalDrEneas = 0, totalTemer = 0, totalNulos = 0, totalBranco = 0, totalVotos = 0;

    // Loop para receber os votos
    while (1) {
        // Apresentar opções de voto
        printf("\n Opcoes de voto:\n");
        printf("1 = Lula\n");
        printf("2 = Bolsonaro\n");
        printf("3 = Dr. Eneas\n");
        printf("4 = Temer\n");
        printf("5 = Voto Nulo\n");
        printf("6 = Voto em Branco\n");
        printf("0 = Encerrar votação\n");

        // Receber o voto do eleitor
        printf("Digite o codigo do candidato (ou 0 para encerrar): ");
        scanf("%d", &voto);

        // Verificar se o usuário deseja encerrar a votação
        if (voto == 0) {
            break;
        }

        // Contabilizar os votos
        switch (voto) {
            case 1:
                totalLula++;
                break;
            case 2:
                totalBolsonaro++;
                break;
            case 3:
                totalDrEneas++;
                break;
            case 4:
                totalTemer++;
                break;
            case 5:
                totalNulos++;
                break;
            case 6:
                totalBranco++;
                break;
            default:
                printf("Codigo de voto inválido.\n");
                break;
        }

        totalVotos++;
    }

    // Exibir os resultados
    printf("\nResultados da votação:\n");
    printf("Total de votos para Lula: %d\n", totalLula);
    printf("Total de votos para Bolsonaro: %d\n", totalBolsonaro);
    printf("Total de votos para Dr. Eneas: %d\n", totalDrEneas);
    printf("Total de votos para Temer: %d\n", totalTemer);
    printf("Total de votos nulos: %d\n", totalNulos);
    printf("Total de votos em branco: %d\n", totalBranco);
    printf("Percentagem de votos nulos sobre o total de votos: %.2f%%\n", (float)totalNulos / totalVotos * 100);
    printf("Percentagem de votos em branco sobre o total de votos: %.2f%%\n", (float)totalBranco / totalVotos * 100);

    return 0;
}

