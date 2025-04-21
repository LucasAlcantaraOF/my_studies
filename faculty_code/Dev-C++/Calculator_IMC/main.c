#include <stdio.h>

void Calculator_IMC(float weight, float height){
	
	float formula = weight / height;
	
	if (formula < 18.5) {
		printf("Seu IMC esta em: %f, portanto, voce esta: Abaixo do Peso", formula);
	} else if (formula >= 18.5 || formula < 24.9) {
		printf("Seu IMC esta em: %f, portanto, voce esta no: Peso Ideal", formula);
	} else if (formula >= 25 || formula < 29.9) {
		printf("Seu IMC esta em: %f, portanto, voce esta com: Excesso de Pele", formula);
	} else if (formula >= 30 || formula < 34.9) {
		printf("Seu IMC esta em: %f, portanto, voce esta com: Obesidade I", formula);
	} else if (formula >= 35 || formula < 39.9) {
		printf("Seu IMC esta em: %f, portanto, voce esta comd: Obesidade II", formula);
	} else if (formula < 50) {
		printf("Seu IMC esta em: %f, portanto, voce esta com: Obesidade III", formula);
	}
}

int main() {
    char name[50];
    char sex;
    int age;
    float weight, height, formula;

    printf("Seja bem vindo(a), irei ajuda-lo(a) a melhorar sua saude.\nPrimeiramente, qual seu nome? \n");
    scanf("%s", name);

    printf("Ola %s.\nIremos primeiramente entender alguns dados seus, para assim nos conhecermos melhor.\n", name);

    printf("Qual sua idade? \n");
    scanf("%d", &age);

    printf("Qual seu sexo? (M ou F) \n");
    
    while (1) {
        scanf(" %c", &sex);
        if (sex == 'M' || sex == 'F' ) {
            break;
        }
        printf("Entrada invalida, por favor digite (M ou F) \n");
    }
    
    printf("Qual sua altura? (em Metros) \n");
    scanf("%f", &height);
    
    printf("Qual seu peso? (em KG) \n");
    scanf("%f", &weight);
    
    printf("\n\nResumindo seus dados: \nIdade: %d \nSexo: %c \nAltura: %f \nPeso: %f \n\n", age, sex, height, weight);

	Calculator_IMC(weight, height);
	
	printf("\n\nIndependente do seu resultado eh sempre necessario averiguar mais profudamente sua saude corporal, portanto, fica recomendado procurar medicos especializados que tenham validades comprovadas. (Eu sou um dev, sos sei programar cara)");
    return 0;
}
