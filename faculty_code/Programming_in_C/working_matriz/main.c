/*Escreva um programa em C que leia uma matriz 3x3 de números inteiros e, em seguida, exiba
os elementos da diagonal principal (ou seja, os elementos onde o índice da linha é igual ao
índice da coluna).*/

#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) { 
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); 
        }
    }

    printf("\n--- Matriz Digitada ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n"); 
    }

    printf("Os elementos da diagonal principal são: \n");
    for (i = 0; i < 3; i++) {
        printf("%d\n", matriz[i][i]); 
    }

    return 0; 
}