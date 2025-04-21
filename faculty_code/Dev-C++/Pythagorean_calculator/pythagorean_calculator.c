#include <stdio.h>
#include <math.h> // Biblioteca para os operadores matemáticos
#include <locale.h> // Biblioteca para as correções ortográficas

int main () {
	
	setlocale(LC_ALL, "Portuguese_Brazil.UTF-8"); // Não funcionou tão bem
	
	float hip, catA, catB;
	
	printf("Seja bem vindo a calculadora da formula de pitagoras \n"); 
	printf("Qual o valor da hipotenusa? \n");
		scanf("%f", &hip);
	printf("Qual o valor do cateto A? \n ");
		scanf("%f", &catA);
	printf("Qual o valor do cateto b? \n ");
		scanf("%f", &catB);
	
	if (hip == 0) {
		hip = sqrt(pow(catA, 2) + pow(catB, 2));
		printf("O valor que esta faltando seria a Hipotenusa \n");
		printf("O valor da Hipotenusa = %f \n", hip);
	} else if (catA == 0) {
				catA = sqrt(pow(hip, 2) - pow(catB, 2));
		printf("O valor que esta faltando seria o Cateto A \n");
		printf("O valor do Cateto A = %f \n", catA);
	} else if (catB == 0) {
				catB = sqrt(pow(hip, 2) - pow(catA, 2));
		printf("O valor que esta faltando seria o Cateto B \n");
		printf("O valor do Cateto B = %f \n", catB);
	}
	
	printf("Obrigado por utilizar a nossa calculadora!");
	
	return 0;
}