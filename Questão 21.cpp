#include <stdio.h>

// Fun��o para calcular o fatorial
long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    // Vari�vel para armazenar o valor fornecido pelo usu�rio
    int n;

    // Solicitar o valor de n
    printf("Digite um valor inteiro para calcular o fatorial: ");
    scanf("%d", &n);

    // Verificar se o valor de n � n�o-negativo
    if (n < 0) {
        printf("O fatorial n�o est� definido para n�meros negativos.\n");
    } else {
        // Calcular e exibir o fatorial
        long long fatorial = calcularFatorial(n);
        printf("O fatorial de %d e: %lld\n", n, fatorial);
    }

    return 0;
}

