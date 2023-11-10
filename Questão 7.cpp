#include <stdio.h>

int main() {
    // Constante para o número de pessoas
    const int numPessoas = 15;

    // Variáveis
    int idade;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;

    // Loop para receber a idade de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        // Verificar faixa etária
        if (idade <= 15) {
            faixa1++;
        } else if (idade <= 30) {
            faixa2++;
        } else if (idade <= 45) {
            faixa3++;
        } else if (idade <= 60) {
            faixa4++;
        } else {
            faixa5++;
        }
    }

    // Calcular percentagens
    float percentFaixa1 = (float)faixa1 / numPessoas * 100.0;
    float percentFaixa5 = (float)faixa5 / numPessoas * 100.0;

    // Exibir resultados
    printf("\nQuantidade de pessoas em cada faixa etária:\n");
    printf("Faixa 1 (até 15 anos): %d\n", faixa1);
    printf("Faixa 2 (16 a 30 anos): %d\n", faixa2);
    printf("Faixa 3 (31 a 45 anos): %d\n", faixa3);
    printf("Faixa 4 (46 a 60 anos): %d\n", faixa4);
    printf("Faixa 5 (acima de 61 anos): %d\n", faixa5);

    printf("\nPercentagem de pessoas na primeira faixa etária: %.2f%%\n", percentFaixa1);
    printf("Percentagem de pessoas na última faixa etária: %.2f%%\n", percentFaixa5);

    return 0;
}

