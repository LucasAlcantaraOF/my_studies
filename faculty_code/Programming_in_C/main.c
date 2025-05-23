// Questão 04

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number1, number2, sum_numbers;
    
    
    printf("Digite um valor para o numero A: ");
    scanf("%d", &number1);
    printf("Digite um valor para o numero B: ");
    scanf("%d", &number2);
    
    sum_numbers = number1 + number2;
    
    if (sum_numbers % 2 == 0){
    	printf("A Soma desses dois numeros eh par, %d", sum_numbers);
	} else {
		printf("A soma desses dois numeros eh impar, %d", sum_numbers);
	}

	return 0;
}