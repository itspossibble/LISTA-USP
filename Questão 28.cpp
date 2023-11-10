#include <stdio.h>

int main() {
    // Vari�veis
    float salario, maiorSalario = 0, somaSalario = 0;
    int numFilhos, totalPessoas = 0, totalFilhos = 0, pessoasAte150 = 0;

    // Loop para receber os dados
    while (1) {
        // Receber o sal�rio
        printf("Digite o salario (digite um valor negativo para encerrar): ");
        scanf("%f", &salario);

        // Verificar se o usu�rio deseja encerrar
        if (salario < 0) {
            break;
        }

        // Receber o n�mero de filhos
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        // Atualizar as vari�veis de contagem e c�lculo
        totalPessoas++;
        totalFilhos += numFilhos;
        somaSalario += salario;

        // Verificar e atualizar o maior sal�rio
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        // Verificar a porcentagem de pessoas com sal�rios at� R$ 150,00
        if (salario <= 150) {
            pessoasAte150++;
        }
    }

    // Calcular e exibir as m�dias e os resultados gerais
    if (totalPessoas > 0) {
        float mediaSalario = somaSalario / totalPessoas;
        float mediaFilhos = (float)totalFilhos / totalPessoas;
        float percentualAte150 = (float)pessoasAte150 / totalPessoas * 100;

        printf("\n Resultados Gerais:\n");
        printf("Media do salario da populacao: %.2f\n", mediaSalario);
        printf("Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentagem de pessoas com salarios ate R$ 150,00: %.2f%%\n", percentualAte150);
    } else {
        printf("\n Nenhum dado foi inserido.\n");
    }

    return 0;
}

