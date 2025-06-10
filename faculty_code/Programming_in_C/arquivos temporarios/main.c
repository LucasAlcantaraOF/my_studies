#include <stdio.h> 

int main() {
    int matriz[3][4];
    int i, j;
    int somaTerceiraLinha = 0;

    printf("Digite os elementos da Matriz: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) { 
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); 
        }
    }

    printf("\nSomando os elementos da terceira linha)...\n");
    for (j = 0; j < 4; j++) {
        somaTerceiraLinha += matriz[2][j];
    }

    printf("\n--- Matriz Digitada ---\n");
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 4; j++) { 
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n"); 
    }

    printf("A soma dos elementos da terceira linha eh: %d\n", somaTerceiraLinha);

    return 0;
}