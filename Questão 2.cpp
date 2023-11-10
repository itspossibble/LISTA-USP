#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    // Solicitar ao usuario para inserir o valor de n
    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    // Verificar se n e positivo
    if (n <= 0) {
        printf("Por favor, insira um valor inteiro e positivo para n.\n");
        return 1;  // Encerrar o programa com código de erro
    }

    // Calcular a soma
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    // Exibir o resultado com 2 casas decimais
    printf("A soma S e: %.2f\n", soma);

    return 0;
}
