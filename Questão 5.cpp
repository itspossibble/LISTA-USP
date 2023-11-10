#include <stdio.h>

int main() {
    // Constantes
    const float precoInicial = 5.00;
    const float decrementoPreco = 0.50;
    const int ingressosInicial = 120;
    const int aumentoVendas = 26;
    const float despesas = 200.00;

    // Vari�veis
    float precoIngresso = precoInicial;
    int ingressosVendidos;
    float lucroMaximo = 0.0;
    float precoMaximo = 0.0;
    int ingressosMaximo = 0;

    // Cabe�alho da tabela
    printf("Pre�o do Ingresso   Ingressos Vendidos   Lucro Esperado\n");

    // Loop para gerar a tabela
    while (precoIngresso >= 1.00) {
        // Calcular os ingressos vendidos com o novo pre�o
        ingressosVendidos = ingressosInicial + (precoInicial - precoIngresso) / decrementoPreco * aumentoVendas;

        // Calcular o lucro esperado
        float lucro = (precoIngresso * ingressosVendidos) - despesas;

        // Exibir os resultados na tabela
        printf("R$ %.2f               %d                   R$ %.2f\n", precoIngresso, ingressosVendidos, lucro);

        // Atualizar o lucro m�ximo se o atual for maior
        if (lucro > lucroMaximo) {
            lucroMaximo = lucro;
            precoMaximo = precoIngresso;
            ingressosMaximo = ingressosVendidos;
        }

        // Atualizar o pre�o do ingresso para a pr�xima itera��o
        precoIngresso -= decrementoPreco;
    }

    // Exibir os resultados do lucro m�ximo
    printf("\nLucro M�ximo Esperado:\n");
    printf("Pre�o do Ingresso: R$ %.2f\n", precoMaximo);
    printf("Ingressos Vendidos: %d\n", ingressosMaximo);
    printf("Lucro M�ximo: R$ %.2f\n", lucroMaximo);

    return 0;
}

