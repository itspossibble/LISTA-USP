#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usu�rio para inserir um n�mero
    printf("Digite um n�mero para calcular a tabuada: ");
    scanf("%d", &numero);

    // Exibir a tabuada do n�mero inserido
    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

