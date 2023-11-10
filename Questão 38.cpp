#include <stdio.h>

int main() {
    int opcao;
    float salario, novoSalario, valorFerias, decimoTerceiro;
    int mesesTrabalhados;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1. Novo Salario\n");
        printf("2. Ferias\n");
        printf("3. Decimo Terceiro\n");
        printf("4. Sair\n");

        printf("Escolha uma opcao (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o salario do funcionario: R$ ");
                scanf("%f", &salario);

                if (salario <= 350.00) {
                    novoSalario = salario * 1.15;
                } else if (salario <= 600.00) {
                    novoSalario = salario * 1.10;
                } else {
                    novoSalario = salario * 1.05;
                }

                printf("Novo Salario: R$ %.2f\n", novoSalario);
                break;

            case 2: 
                printf("Digite o salario do funcionario: R$ ");
                scanf("%f", &salario);

                valorFerias = salario + (salario / 3.0);
                printf("Valor de Ferias: R$ %.2f\n", valorFerias);
                break;

            case 3: 
                printf("Digite o salario do funcionario: R$ ");
                scanf("%f", &salario);

                printf("Digite o número de meses trabalhados (1-12): ");
                scanf("%d", &mesesTrabalhados);

                if (mesesTrabalhados < 1 || mesesTrabalhados > 12) {
                    printf("Numero de meses invalido.\n");
                } else {
                    decimoTerceiro = salario * (float)mesesTrabalhados / 12.0;
                    printf("Valor do Decimo Terceiro: R$ %.2f\n", decimoTerceiro);
                }
                break;

            case 4: 
                printf("Programa encerrado.\n");
                break;

            default: 
                printf("Opcao invalida. Por favor, escolha uma opção valida.\n");
        }
    } while (opcao != 4);

    return 0;
}

