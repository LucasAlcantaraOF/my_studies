#include <stdio.h>
#include <string.h>

int main() {
	
	char name[21], sobrenome[21];

	printf("Qual seu primeiro nome?\n");
	gets(name);
	printf("Qual seu segundo nome?\n");
	gets(sobrenome);
	strcat(name, sobrenome);
	printf("\n\nSeu nome eh: ");
	puts(name);
	
	printf("\n\nSeu primeiro nome tem: %d letras \n", strlen(name));
	printf("Seu primeiro nome tem: %d letras \n", strlen(sobrenome));
	
	strcpy(sobrenome, name);
	
	printf("Copiando strings: %s %s", name, sobrenome);
	
	return 0;
}	