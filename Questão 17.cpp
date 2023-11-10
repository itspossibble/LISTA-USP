#include <stdio.h>

int main() {
    // Constante para o n�mero de pessoas
    const int numPessoas = 7;

    // Vari�veis
    int idade, somaIdadesTotal = 0, somaIdadesMulheres = 0, somaIdadesHomens = 0;
    char sexo;

    // Loop para receber informa��es de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Informe os dados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);

        // Calcular a idade m�dia do grupo
        somaIdadesTotal += idade;

        // Calcular a idade m�dia das mulheres
        if (sexo == 'F' || sexo == 'f') {
            somaIdadesMulheres += idade;
        }

        // Calcular a idade m�dia dos homens
        if (sexo == 'M' || sexo == 'm') {
            somaIdadesHomens += idade;
        }
    }

    // Calcular as m�dias
    float mediaIdadesTotal = (float)somaIdadesTotal / numPessoas;
    float mediaIdadesMulheres = (float)somaIdadesMulheres / numPessoas;
    float mediaIdadesHomens = (float)somaIdadesHomens / numPessoas;

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("Idade m�dia do grupo: %.2f anos\n", mediaIdadesTotal);
    printf("Idade m�dia das mulheres: %.2f anos\n", mediaIdadesMulheres);
    printf("Idade m�dia dos homens: %.2f anos\n", mediaIdadesHomens);

    return 0;
}

