#include <stdio.h>

int main() {
    int matriz[5][4];


    printf("Digite cinco grupos de quatro valores (A, B, C, D):\n");
    for (int i = 0; i < 5; i++) {
        printf("Grupo %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nValores na ordem lida:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (matriz[i][j] > matriz[i][k]) {
                    
                    int temp = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = temp;
                }
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    printf("\n Valores em ordem decrescente:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (matriz[i][j] < matriz[i][k]) {
                    
                    int temp = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = temp;
                }
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

