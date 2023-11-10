#include <stdio.h>

// Constantes para as faixas etárias
#define FAIXA_1_10 10
#define FAIXA_11_20 20
#define FAIXA_21_30 30

int main() {
    // Variáveis
    int idade, totalPessoas[4] = {0};
    float peso, totalPesos[4] = {0.0};

    // Loop para receber as informações de cada pessoa
    for (int i = 0; i < 15; i++) {
        printf("Informe os dados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso: ");
        scanf("%f", &peso);

        // Adicionar o peso à faixa etária correspondente
        if (idade >= 1 && idade <= FAIXA_1_10) {
            totalPesos[0] += peso;
            totalPessoas[0]++;
        } else if (idade <= FAIXA_11_20) {
            totalPesos[1] += peso;
            totalPessoas[1]++;
        } else if (idade <= FAIXA_21_30) {
            totalPesos[2] += peso;
            totalPessoas[2]++;
        } else {
            totalPesos[3] += peso;
            totalPessoas[3]++;
        }
    }

    // Calcular e exibir a média dos pesos para cada faixa etária
    printf("\nMédia dos pesos por faixa etária:\n");
    for (int i = 0; i < 4; i++) {
        if (totalPessoas[i] > 0) {
            float mediaPeso = totalPesos[i] / totalPessoas[i];
            printf("Faixa etária %d-%d anos: %.2f\n", i * 10 + 1, (i + 1) * 10, mediaPeso);
        } else {
            printf("Faixa etária %d-%d anos: Nenhum dado disponível\n", i * 10 + 1, (i + 1) * 10);
        }
    }

    return 0;
}

