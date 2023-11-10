#include <stdio.h>

int main() {
    // Loop externo para as tabuadas de 1 a 10
    for (int i = 1; i <= 10; i++) {
        printf("\nTabuada do %d:\n", i);

        // Loop interno para multiplicação de 1 a 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

