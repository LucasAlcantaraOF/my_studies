#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dateNow, mounthNow, yearNow, yourDate, yourMounth, yourYear;
	int dateC, mounthC, yearC;
	
	printf("Voce eh lesadinho e esqueceu sua idade? \nIrei te ajudar, primeiramente, pode me ajudar tambem? \nQual eh a data de hoje? ");
	scanf("%i", &dateNow);
	
	printf("Qual mes estamos? ");
	scanf("%i", &mounthNow);
	
	printf("Qual o atual ano ");
	scanf("%i", &yearNow);
	
	printf("Portanto, hoje eh %i/%i/%i \n", dateNow, mounthNow, yearNow);
	
	printf("Informe o dia que voce nasceu:");
	scanf("%i", &yourDate);
	
	printf("Informe o mes que voce nasceu:");
	scanf("%i", &yourMounth);
	
	printf("Informe o ano que voce nasceu");
	scanf("%i", &yourYear);
	
	printf("Hahaha, eu ainda calculei quantos dias, meses e anos voce esta vivo, quem sabe depois fazemos com suas horas");
	
	dateC = abs(dateNow - yourDate);
	mounthC = abs(mounthNow - yourMounth);
	yearC = abs(yearNow - yourYear);
	
	printf("Voce esta vivo a: %i Dias, %i Meses e %i Anos", dateC, mounthC, yearC);
	
	return 0;
}