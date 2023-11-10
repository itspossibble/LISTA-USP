#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário para inserir um número
    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &numero);

    // Exibir a tabuada do número inserido
    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

