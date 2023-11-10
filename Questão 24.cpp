#include <stdio.h>

int main() {
    // Variáveis
    char sexo, resposta;
    int numSim = 0, numNao = 0, numMulheresSim = 0, numHomensNao = 0, numHomens = 0;

    // Loop para receber as respostas de 10 entrevistados
    for (int i = 0; i < 10; i++) {
        printf("Informe os dados do entrevistado %d:\n", i + 1);

        // Receber o sexo
        printf("Sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);

        // Receber a resposta (S para sim, N para não)
        printf("Resposta (S para sim, N para nao): ");
        scanf(" %c", &resposta);

        // Processar a resposta
        if (resposta == 'S' || resposta == 's') {
            numSim++;
            if (sexo == 'F' || sexo == 'f') {
                numMulheresSim++;
            } else if (sexo == 'M' || sexo == 'm') {
                numHomensNao++;
            }
        } else if (resposta == 'N' || resposta == 'n') {
            numNao++;
        } else {
            printf("Resposta invalida. Tente novamente.\n");
            i--; // Decrementar i para repetir a entrada para o mesmo entrevistado
        }

        // Contar o número de homens
        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
        }
    }

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("Número de pessoas que respondeu sim: %d\n", numSim);
    printf("Número de pessoas que respondeu nao: %d\n", numNao);
    printf("Número de mulheres que respondeu sim: %d\n", numMulheresSim);
    printf("Número de homens que respondeu nao entre todos os homens analisados: %d\n", numHomensNao);

    return 0;
}

