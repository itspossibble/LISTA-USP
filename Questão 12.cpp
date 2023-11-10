#include <stdio.h>

int main() {
    
    const int numPessoas = 25;

    
    int idade;
    float altura, peso;
    int contIdade50 = 0;
    float somaAlturas10a20 = 0.0;
    int contPesoMenor40 = 0;

    
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        printf("Digite o peso da pessoa %d (em quilos): ", i + 1);
        scanf("%f", &peso);

        
        if (idade > 50) {
            contIdade50++;
        }

        
        if (idade >= 10 && idade <= 20) {
            somaAlturas10a20 += altura;
        }

        
        if (peso < 40) {
            contPesoMenor40++;
        }
    }

    
    float mediaAlturas10a20 = somaAlturas10a20 / numPessoas;

    
    float percentPesoMenor40 = (float)contPesoMenor40 / numPessoas * 100.0;

    
    printf("\nResultados:\n");
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contIdade50);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", mediaAlturas10a20);
    printf("Percentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", percentPesoMenor40);

    return 0;
}

