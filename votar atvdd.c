#include <stdlib.h>
#include <stdio.h>
#include <string.h>




int main(){
	
	//Vari�veis.
	
	int idade;
	
	
	printf("Insira Sua Idade: ");
	scanf("%f",&idade);
	
	//If ELse
	if( idade>=18 && idade<=65 ){
		printf("Obrigado a Votar!!");
	}else{
		printf("n�o � Obigado A Votar!!");
	}
	return 0;
	
}
