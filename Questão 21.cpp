#include <stdio.h>

// Função para calcular o fatorial
long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    // Variável para armazenar o valor fornecido pelo usuário
    int n;

    // Solicitar o valor de n
    printf("Digite um valor inteiro para calcular o fatorial: ");
    scanf("%d", &n);

    // Verificar se o valor de n é não-negativo
    if (n < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        // Calcular e exibir o fatorial
        long long fatorial = calcularFatorial(n);
        printf("O fatorial de %d e: %lld\n", n, fatorial);
    }

    return 0;
}

