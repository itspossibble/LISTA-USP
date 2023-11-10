#include <stdio.h>

int main() {
    // Constante para o n�mero de pessoas
    const int numPessoas = 10;

    // Vari�veis
    int idade;
    float peso, altura;
    int contPesoAltura = 0;
    int contIdade1030Altura190 = 0;
    int somaIdades = 0;

    // Loop para receber informa��es de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Informe os dados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso (em quilos): ");
        scanf("%f", &peso);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        // Calcular a m�dia das idades
        somaIdades += idade;

        // Verificar a quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50 metros
        if (peso > 90.0 && altura < 1.50) {
            contPesoAltura++;
        }

        // Verificar a percentagem de pessoas com idade entre 10 e 30 anos entre aquelas que medem mais de 1,90 metros
        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            contIdade1030Altura190++;
        }
    }

    // Calcular a m�dia das idades
    float mediaIdades = (float)somaIdades / numPessoas;

    // Calcular a percentagem de pessoas com idade entre 10 e 30 anos entre aquelas que medem mais de 1,90 metros
    float percentIdade1030Altura190 = (float)contIdade1030Altura190 / numPessoas * 100.0;

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("M�dia das idades das dez pessoas: %.2f anos\n", mediaIdades);
    printf("Quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50 metros: %d\n", contPesoAltura);
    printf("Percentagem de pessoas com idade entre 10 e 30 anos entre aquelas que medem mais de 1,90 metros: %.2f%%\n", percentIdade1030Altura190);

    return 0;
}

