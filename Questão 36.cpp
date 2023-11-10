#include <stdio.h>

int main() {
    // Variáveis
    int idade;
    float altura;
    int contPessoasMais50 = 0;
    float somaAlturasMais50 = 0;

    // Loop para receber os dados
    while (1) {
        // Receber a idade
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        // Verificar se o usuário deseja encerrar
        if (idade == 0) {
            break;
        }

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (idade > 50) {
            somaAlturasMais50 += altura;
            contPessoasMais50++;
        }
    }

    if (contPessoasMais50 > 0) {
        float mediaAlturasMais50 = somaAlturasMais50 / contPessoasMais50;
        printf("\n Media das alturas das pessoas com mais de 50 anos: %.2f\n", mediaAlturasMais50);
    } else {
        printf("\n Nenhuma pessoa com mais de 50 anos foi inserida.\n");
    }

    return 0;
}

