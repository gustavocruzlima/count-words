#include <stdio.h>

#define QTD (30)

char *ler_input (char *);

int main(void)
{
	FILE *arq;
	char nome[QTD], arquivo;
	int i, count = 0;

	do
	{
		printf("Nome do arquivo: ");
		printf("(<Enter> p/ terminar): ");

		if (scanf("%29[^\n]", nome) == 0){
			return 0;
		}

		scanf("%*[^\n]");
		scanf("%*c");

		arq = fopen(nome, "r");

		if (arq == NULL){
			printf("Erro ao abrir %s \n", nome);
		}

	} while (arq == NULL);
	
	while ((arquivo = fgetc(arq)) != EOF) {
		if(arquivo == ' ' || arquivo == '\t' || arquivo == '\0' || arquivo == '\n') {
			if (i) {
				i = 0;
				count++;
			}
		} else {
			i = 1;
		}
  	}

	printf("palavras do arquivo %s : %d\n",nome, count);
	fclose(arq);
	return 0;
}