#include <stdio.h>

int main() {
    
    const int MIN_AULAS = 40;

    
    int matricula;
    float nota1, nota2, nota3, notaFinal;
    int frequencia;
    int totalReprovados = 0, totalAlunos = 0, totalReprovadosFrequencia = 0;
    float maiorNota = 0, menorNota = 10; 

    
    for (int i = 0; i < 10; i++) {
        printf("Informe os dados do aluno %d:\n", i + 1);

        
        printf("Numero da matricula: ");
        scanf("%d", &matricula);

        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        printf("Nota 3: ");
        scanf("%f", &nota3);

        printf("Frequencia (numero de aulas frequentadas): ");
        scanf("%d", &frequencia);

        
        notaFinal = (nota1 + nota2 + nota3) / 3.0;

        
        if (notaFinal >= 6 && frequencia >= MIN_AULAS) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
            totalReprovados++;

            
            if (frequencia < MIN_AULAS) {
                totalReprovadosFrequencia++;
            }
        }

        
        if (notaFinal > maiorNota) {
            maiorNota = notaFinal;
        }
        if (notaFinal < menorNota) {
            menorNota = notaFinal;
        }

        
        totalAlunos++;
    }

    
    printf("\nResultados Gerais:\n");
    printf("Maior nota da turma: %.2f\n", maiorNota);
    printf("Menor nota da turma: %.2f\n", menorNota);
    printf("Total de alunos reprovados: %d\n", totalReprovados);

    
    if (totalAlunos > 0) {
        float percentualReprovadosFrequencia = (float)totalReprovadosFrequencia / totalAlunos * 100.0;
        printf("Percentual de alunos reprovados por frequencia abaixo do minimo: %.2f%%\n", percentualReprovadosFrequencia);
    } else {
        printf("Nenhum aluno na turma.\n");
    }

    return 0;
}

