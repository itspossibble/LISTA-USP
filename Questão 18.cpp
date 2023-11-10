#include <stdio.h>

int main() {
    // Variáveis
    float valorCarro, precoFinal, valorParcela;
    int quantidadeParcelas;

    // Solicitar o valor do carro
    printf("Informe o valor do carro: R$ ");
    scanf("%f", &valorCarro);

    // Calcular o preço final para compra à vista com desconto de 20%
    precoFinal = valorCarro * 0.8;

    // Exibir o preço final para compra à vista
    printf("\n Preco final para compra a vista: R$ %.2f\n", precoFinal);

    // Exibir a tabela com as opções de parcelamento
    printf("\n Tabela de Parcelamento:\n");
    printf("Quantidade de Parcelas | Valor da Parcela\n");

    // Loop para as opções de parcelamento
    for (quantidadeParcelas = 6; quantidadeParcelas <= 60; quantidadeParcelas += 6) {
        // Calcular o percentual de acréscimo
        float percentualAcrescimo = (quantidadeParcelas / 6) * 3;

        // Calcular o valor da parcela com acréscimo
        valorParcela = (valorCarro * (1 + percentualAcrescimo / 100)) / quantidadeParcelas;

        // Exibir a quantidade de parcelas e o valor da parcela
        printf("%20d | R$ %.2f\n", quantidadeParcelas, valorParcela);
    }

    return 0;
}

