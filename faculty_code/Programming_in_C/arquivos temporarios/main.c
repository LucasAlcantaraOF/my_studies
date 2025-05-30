#include <stdio.h>

int main() {
    int numero;

    printf("Por favor, digite um número.\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero); // Lê o número do usuário

        if (numero >= 0) { // Se o número for positivo (maior ou igual a zero)
            printf("Número inválido! Digite um número menor que zero.\n");
        }

    } while (numero >= 0); // Repete enquanto o número for inválido (maior ou igual a zero)

    printf("Você digitou o número negativo: %d. Ótimo!\n", numero);

    return 0;
}