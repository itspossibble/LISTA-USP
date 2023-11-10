#include <stdio.h>

int main() {
    // Constante para o número de pessoas
    const int numPessoas = 20;

    // Variáveis
    int idade;
    float peso, altura;
    char olhos[2], cabelos[2];
    int contIdadePeso = 0;
    int contAltura150 = 0;
    int contOlhosAzuis = 0;
    int contRuivasSemOlhosAzuis = 0;
    int somaIdades = 0;

    // Loop para receber informações de cada pessoa
    for (int i = 0; i < numPessoas; i++) {
        printf("Informe os dados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso (em quilos): ");
        scanf("%f", &peso);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Cor dos olhos (A - Azul, P - Preto, V - Verde, C - Castanho): ");
        scanf("%s", olhos);

        printf("Cor dos cabelos (P - Preto, C - Castanho, L - Louro, R - Ruivo): ");
        scanf("%s", cabelos);

        // Verificar a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos
        if (idade > 50 && peso < 60.0) {
            contIdadePeso++;
        }

        // Calcular a soma das idades das pessoas com altura inferior a 1,50 metros
        if (altura < 1.50) {
            somaIdades += idade;
            contAltura150++;
        }

        // Verificar a percentagem de pessoas com olhos azuis
        if (olhos[0] == 'A' || olhos[0] == 'a') {
            contOlhosAzuis++;
        }

        // Verificar a quantidade de pessoas ruivas e que não possuem olhos azuis
        if (cabelos[0] == 'R' || cabelos[0] == 'r') {
            if (olhos[0] != 'A' && olhos[0] != 'a') {
                contRuivasSemOlhosAzuis++;
            }
        }
    }

    // Calcular a média das idades das pessoas com altura inferior a 1,50 metros
    float mediaIdadesAltura150 = contAltura150 > 0 ? (float)somaIdades / contAltura150 : 0;

    // Calcular a percentagem de pessoas com olhos azuis
    float percentOlhosAzuis = (float)contOlhosAzuis / numPessoas * 100.0;

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos: %d\n", contIdadePeso);
    printf("Média das idades das pessoas com altura inferior a 1,50 metros: %.2f anos\n", mediaIdadesAltura150);
    printf("Percentagem de pessoas com olhos azuis: %.2f%%\n", percentOlhosAzuis);
    printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", contRuivasSemOlhosAzuis);

    return 0;
}

