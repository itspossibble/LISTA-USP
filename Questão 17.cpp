#include <stdio.h>

int main() {
    // Constante para o número de pessoas
    const int numPessoas = 7;

    // Variáveis
    int idade, somaIdadesTotal = 0, somaIdadesMulheres = 0, somaIdadesHomens = 0;
    char sexo;

    // Loop para receber informações de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Informe os dados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);

        // Calcular a idade média do grupo
        somaIdadesTotal += idade;

        // Calcular a idade média das mulheres
        if (sexo == 'F' || sexo == 'f') {
            somaIdadesMulheres += idade;
        }

        // Calcular a idade média dos homens
        if (sexo == 'M' || sexo == 'm') {
            somaIdadesHomens += idade;
        }
    }

    // Calcular as médias
    float mediaIdadesTotal = (float)somaIdadesTotal / numPessoas;
    float mediaIdadesMulheres = (float)somaIdadesMulheres / numPessoas;
    float mediaIdadesHomens = (float)somaIdadesHomens / numPessoas;

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("Idade média do grupo: %.2f anos\n", mediaIdadesTotal);
    printf("Idade média das mulheres: %.2f anos\n", mediaIdadesMulheres);
    printf("Idade média dos homens: %.2f anos\n", mediaIdadesHomens);

    return 0;
}

