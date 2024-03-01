#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char login [50];
	char senha  [50]="wendell10";
	char senhaCad;
	
	printf("Insira Seu Login: ");
	scanf("%s",&login);
	
	printf("Insira Sua Senha: ");
	scanf("%s",&senha);
	
	if(strcmp(login,senha)==0 && (senha,senhaCad)==0){
		printf("acesso Confirmado!");
		
	} else{
		printf("Login OU Senha Errados!!");
	}
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
