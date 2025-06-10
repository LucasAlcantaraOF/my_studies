/*  Crie um algoritmo que leia 6 números inteiros e guarde-os em um vetor. No final mostre
quantos deles são pares e quantos são ímpares */

#include <stdio.h>

int main() {
	
	int numbers[5]; // Declarei o Vetor "Numbers" e uma variável para ser o meu índice.	
	int i;
	
	for(i = 0; i <= 4 ; i++) {
		printf("Digite o numero %d: ", i + 1); 
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i <= 5 ; i++){ 
		if (numbers[i] % 2) { // Criei uma estrutura condicional para validar se o numero inserido é um valor par ou impar.
	    	printf("O indice %d, eh um valor par e seu valor eh: %d \n", i, numbers[i]);
		} else {
	    	printf("O indice %d, eh um valor impar e seu valor eh: %d \n", i, numbers[i]);
		}
	}

	return 0;
}