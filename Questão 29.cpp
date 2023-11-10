#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Variáveis
    int idade, menorIdade = INT_MAX, maiorIdade = 0, totalIdades = 0;
    char sexo;
    float salario, menorSalario = FLT_MAX, somaSalarios = 0;
    int mulheresAte200 = 0;
    char sexoMenorSalario;
    
    
    while (1) {
        
        printf("Digite a idade (digite uma idade negativa para encerrar): ");
        scanf("%d", &idade);

        
        if (idade < 0) {
            break;
        }

        
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        
        printf("Digite o salario: ");
        scanf("%f", &salario);

        
        totalIdades++;
        somaSalarios += salario;

       
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        
        if ((sexo == 'F' || sexo == 'f') && salario <= 200.0) {
            mulheresAte200++;
        }

       
        if (salario < menorSalario) {
            menorSalario = salario;
            sexoMenorSalario = sexo;
        }
    }

    
    if (totalIdades > 0) {
        float mediaSalarios = somaSalarios / totalIdades;

        printf("\nResultados Gerais:\n");
        printf("Media dos salarios: %.2f\n", mediaSalarios);
        printf("Maior idade: %d\n", maiorIdade);
        printf("Menor idade: %d\n", menorIdade);
        printf("Quantidade de mulheres com salario ate R$ 200,00: %d\n", mulheresAte200);
        printf("Idade da pessoa com o menor salario: %d\n", menorIdade);
        printf("Sexo da pessoa com o menor salario: %c\n", sexoMenorSalario);
    } else {
        printf("\n Nenhum dado foi inserido.\n");
    }

    return 0;
}

