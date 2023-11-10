#include <stdio.h>

int main() {
    // Variáveis
    int codigo;
    float precoCusto, novoPreco, somaPrecos = 0, somaPrecosComAumento = 0;
    int totalProdutos = 0;

    // Loop para receber os dados
    while (1) {
        // Receber o código do produto
        printf("Digite o codigo do produto (digite um codigo negativo para encerrar): ");
        scanf("%d", &codigo);

        // Verificar se o usuário deseja encerrar
        if (codigo < 0) {
            break;
        }

        // Receber o preço de custo do produto
        printf("Digite o preco de custo do produto: ");
        scanf("%f", &precoCusto);

        // Calcular o novo preço com aumento de 20%
        novoPreco = precoCusto * 1.20;

        // Exibir o código e o novo preço do produto
        printf("Codigo do Produto: %d\n", codigo);
        printf("Novo Preco do Produto: %.2f\n", novoPreco);

        // Atualizar as variáveis de cálculo
        somaPrecos += precoCusto;
        somaPrecosComAumento += novoPreco;
        totalProdutos++;
    }

    // Calcular e exibir as médias
    if (totalProdutos > 0) {
        float mediaPrecos = somaPrecos / totalProdutos;
        float mediaPrecosComAumento = somaPrecosComAumento / totalProdutos;

        printf("\n Medias:\n");
        printf("Media dos preços (sem aumento): %.2f\n", mediaPrecos);
        printf("Media dos preços (com aumento): %.2f\n", mediaPrecosComAumento);
    } else {
        printf("\n Nenhum produto foi inserido.\n");
    }

    return 0;
}

