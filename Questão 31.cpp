#include <stdio.h>

int main() {
    // Variáveis
    int numero;
    int quantidadeInferiores35 = 0;
    int totalNumerosPositivos = 0;
    int totalNumerosEntre50e100 = 0;
    int totalNumerosMenor50 = 0;
    int totalNumerosEntre10e20Menor50 = 0;

    // Loop para receber os dados
    while (1) {
        // Receber um número
        printf("Digite um numero (digite um numero negativo para encerrar): ");
        scanf("%d", &numero);

        // Verificar se o usuário deseja encerrar
        if (numero < 0) {
            break;
        }

        // Contar a quantidade de números inferiores a 35
        if (numero < 35) {
            quantidadeInferiores35++;
        }

        // Calcular a média dos números positivos
        if (numero > 0) {
            totalNumerosPositivos += numero;
        }

        // Contar a quantidade de números entre 50 e 100
        if (numero >= 50 && numero <= 100) {
            totalNumerosEntre50e100++;
        }

        // Contar a quantidade de números menores que 50
        if (numero < 50) {
            totalNumerosMenor50++;

            // Contar a quantidade de números entre 10 e 20 entre os números menores que 50
            if (numero >= 10 && numero <= 20) {
                totalNumerosEntre10e20Menor50++;
            }
        }
    }

    // Calcular e exibir os resultados
    if (totalNumerosPositivos > 0) {
        float mediaNumerosPositivos = (float)totalNumerosPositivos / (totalNumerosPositivos > 0 ? totalNumerosPositivos : 1);
        float percentagemEntre50e100 = (float)totalNumerosEntre50e100 / (totalNumerosPositivos > 0 ? totalNumerosPositivos : 1) * 100;
        float percentagemEntre10e20Menor50 = (float)totalNumerosEntre10e20Menor50 / (totalNumerosMenor50 > 0 ? totalNumerosMenor50 : 1) * 100;

        printf("\nResultados:\n");
        printf("Quantidade de numeros inferiores a 35: %d\n", quantidadeInferiores35);
        printf("Média dos numeros positivos: %.2f\n", mediaNumerosPositivos);
        printf("Percentagem de numeros entre 50 e 100: %.2f%%\n", percentagemEntre50e100);
        printf("Percentagem de numeros entre 10 e 20 entre os números menores que 50: %.2f%%\n", percentagemEntre10e20Menor50);
    } else {
        printf("\nNenhum numero foi inserido ou todos os numeros digitados foram negativos.\n");
    }

    return 0;
}

