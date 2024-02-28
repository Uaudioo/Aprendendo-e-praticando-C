#include <stdio.h>
#include <stdlib.h>


	
	
int main(){
	char nomeAluno [200];
	int idadeAluno;
	float primeiraNota,segundaNota;
	float somaNotas,mediaFinal ;
	
	
	
			//Pedindo Dados
			
			printf("Insira Seu Nome: ");
			scanf("%s",&nomeAluno);
			
			printf("Insira Sua Idade: ");
			scanf("%d",&idadeAluno);	
			
			printf("Insira Sua Primeira Nota: ");
			scanf("%f",&primeiraNota);
			fflush(stdin);
			
			printf("Insira Sua Segunda Nota: ");
			scanf("%f",&segundaNota);
			
			
			//Soma
			somaNotas=(primeiraNota+segundaNota);			
			mediaFinal=(somaNotas/2);
			
			//Exibindo
			
			system("cls");
			
			printf("========================================");
			
			
			
			printf("\nNome Do Aluno: %s \n",nomeAluno);
			printf("Idade Do Aluno: %d \n",idadeAluno);
			printf("Primeira Nota Do Aluno: %f\n",primeiraNota);
			printf("Segunda Nota Do Aluno: %f\n",segundaNota);	
			
			printf("Nota Total: %f \n",somaNotas);
			printf("Média Final: %f \n",mediaFinal);
			
			//Switch Case ou if else		
			if(mediaFinal>=5){
				printf("Aluno Aprovado!!");
			}
			else{
				printf("Aluno Reprovado!!");
			}
			
			
			printf("\n========================================");
			
			
	return 0;
	
	
	
	
	
	
}
