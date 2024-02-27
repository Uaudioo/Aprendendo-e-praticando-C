#include <stdio.h>

int main(){
	//Declarando Va
	
	char sexo;
	char nome [200];
	int idade;
	float peso;
	
	
	
	printf("=========================================");	
	
	printf("\nInsira Seu Sexo: ");
	scanf("%c",&sexo);
	fflush(stdin);
	
	printf("\nInsira Seu Nome: ");
	scanf("%s",&nome);
	 fflush(stdin);
	
	printf("\nInsira Sua Idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	printf("\nInsira Seu Peso: ");
	scanf("%f",&peso);
	fflush(stdin);
	// Exibindo
	printf("========================================================================");
	printf("\nNome: %s",nome);
	printf("\nSexo: %c",sexo);
	printf("\nIdade: %i",idade);
	printf("\nPeso: %f",peso);
	

	
	
	return 0;
}
