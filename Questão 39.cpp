#include <stdio.h>

int main() {
    int codigoCliente, tipoConta;
    float valorInvestido, rendimentoMensal, totalInvestido = 0, totalJuros = 0;

    while (1) {
        printf("Digite o codigo do cliente (ou <= 0 para encerrar): ");
        scanf("%d", &codigoCliente);

        if (codigoCliente <= 0) {
            break;
        }

        printf("Digite o tipo de conta (1-Poupanca, 2-Poupanca Plus, 3-Fundos de Renda Fixa): ");
        scanf("%d", &tipoConta);

        printf("Digite o valor investido: R$ ");
        scanf("%f", &valorInvestido);

        switch (tipoConta) {
            case 1: 
                rendimentoMensal = valorInvestido * 0.015;
                break;
            case 2: 
                rendimentoMensal = valorInvestido * 0.02;
                break;
            case 3: 
                rendimentoMensal = valorInvestido * 0.04;
                break;
            default:
                printf("Tipo de conta invalido. Tente novamente.\n");
                continue; // Volta ao início do loop
        }

        printf("Rendimento Mensal: R$ %.2f\n", rendimentoMensal);

        totalInvestido += valorInvestido;
        totalJuros += rendimentoMensal;
    }

    printf("\n Total Investido: R$ %.2f\n", totalInvestido);
    printf("Total de Juros Pagos: R$ %.2f\n", totalJuros);

    return 0;
}

