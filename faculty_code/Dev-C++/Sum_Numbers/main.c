#include <stdio.h>

int main() {

	float number_base, number_height, sum, perimeter;
	
	printf("Vamos calcular a media de um triangulo (Em numeros reais, utilize ponto(.) para separa-los) \n");
	
	printf("Digite o valor da base:"); // Recebendo o valor da sua base
		scanf("%f", &number_base);
		printf("Voce declarou que o valor da base = %f", number_base);
			printf("\n");
	
	printf("\n Digite o valor da altura:"); // Recebendo o valor da sua altura
		scanf("%f", &number_height);
		printf("Voce declarou que o valor da altura = %f \n", number_height);
			printf("\n");

	sum = number_base * number_height; // Realizando o calculo da media
		printf("A media do triangulo = %f", sum);
			printf("\n");

		
	perimeter = number_base * number_height / 2; // Realizando o calculo do perimetro
		printf("\n E seu perimetro = %f", perimeter);
			printf("\n");
	
	// Resumindo todos os dados
	printf("\n Resumidamente, o valor da base foi: %f e a sua altura foi: %f. A media calculada foi: %f e seu perimetro foi: %f", number_base, number_height, sum, perimeter);
	
	return 0;
}