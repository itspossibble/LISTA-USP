#include <stdio.h>

int main() {
    printf("Numeros entre 1000 e 2000 que, quando divididos por 11, produzem resto igual a 5:\n");

    for (int i = 1000; i <= 2000; i++) {
        if (i % 11 == 5) {
            printf("%d\n", i);
        }
    }

    return 0;
}
