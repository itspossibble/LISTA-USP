#include <stdio.h>

int main() {
    
    const int numTransacoes = 15;

    
    char codigo;
    float valor;
    float totalVista = 0.0, totalPrazo = 0.0, valorTotal = 0.0, primeiraPrestacao;

    
    for (int i = 0; i < numTransacoes; i++) {
        printf("Digite o codigo (V para a vista, P para a prazo) da transacao %d: ", i + 1);
        scanf(" %c", &codigo); 

        printf("Digite o valor da transacao %d: R$ ", i + 1);
        scanf("%f", &valor);

        
        if (codigo == 'V' || codigo == 'v') {
            totalVista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            totalPrazo += valor;
        }

        
        valorTotal += valor;
    }

    
    primeiraPrestacao = totalPrazo / 3.0;

    
    printf("\nResumo das Transacoess:\n");
    printf("Total das compras a vista: R$ %.2f\n", totalVista);
    printf("Total das compras a prazo: R$ %.2f\n", totalPrazo);
    printf("Valor total das compras efetuadas: R$ %.2f\n", valorTotal);
    printf("Valor da primeira prestacao das compras a prazo: R$ %.2f\n", primeiraPrestacao);

    return 0;
}

