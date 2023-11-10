#include <stdio.h>

int main() {
    // Constantes
    const float precoInicial = 5.00;
    const float decrementoPreco = 0.50;
    const int ingressosInicial = 120;
    const int aumentoVendas = 26;
    const float despesas = 200.00;

    // Variáveis
    float precoIngresso = precoInicial;
    int ingressosVendidos;
    float lucroMaximo = 0.0;
    float precoMaximo = 0.0;
    int ingressosMaximo = 0;

    // Cabeçalho da tabela
    printf("Preço do Ingresso   Ingressos Vendidos   Lucro Esperado\n");

    // Loop para gerar a tabela
    while (precoIngresso >= 1.00) {
        // Calcular os ingressos vendidos com o novo preço
        ingressosVendidos = ingressosInicial + (precoInicial - precoIngresso) / decrementoPreco * aumentoVendas;

        // Calcular o lucro esperado
        float lucro = (precoIngresso * ingressosVendidos) - despesas;

        // Exibir os resultados na tabela
        printf("R$ %.2f               %d                   R$ %.2f\n", precoIngresso, ingressosVendidos, lucro);

        // Atualizar o lucro máximo se o atual for maior
        if (lucro > lucroMaximo) {
            lucroMaximo = lucro;
            precoMaximo = precoIngresso;
            ingressosMaximo = ingressosVendidos;
        }

        // Atualizar o preço do ingresso para a próxima iteração
        precoIngresso -= decrementoPreco;
    }

    // Exibir os resultados do lucro máximo
    printf("\nLucro Máximo Esperado:\n");
    printf("Preço do Ingresso: R$ %.2f\n", precoMaximo);
    printf("Ingressos Vendidos: %d\n", ingressosMaximo);
    printf("Lucro Máximo: R$ %.2f\n", lucroMaximo);

    return 0;
}

