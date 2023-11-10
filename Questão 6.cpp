#include <stdio.h>

int main() {
    // Constante para o n�mero de pessoas
    const int numPessoas = 10;

    // Vari�veis
    int idade;
    int contadorMaiorOuIgual18 = 0;

    // Loop para receber a idade de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        // Verificar se a idade � maior ou igual a 18
        if (idade >= 18) {
            contadorMaiorOuIgual18++;
        }
    }

    // Exibir a quantidade de pessoas com idade maior ou igual a 18
    printf("\nQuantidade de pessoas com idade maior ou igual a 18: %d\n", contadorMaiorOuIgual18);

    return 0;
}

