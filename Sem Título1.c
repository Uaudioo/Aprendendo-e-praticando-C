#include <stdio.h>
#include <stdlib.h>


	
	
int main(){
	char nomeAluno [200];
	int idadeAluno;
	float primeiraNota,segundaNota,terceiraNota;
	float somaNotas,mediaFinal ;
	
	
	
			//Pedindo Dados
			printf("DADOS DO ALUNO");
			printf("\nInsira Seu Nome: ");
			scanf("%s",&nomeAluno);
			
			printf("Insira Sua Idade: ");
			scanf("%d",&idadeAluno);	
			
			printf("Insira Sua Primeira Nota: ");
			scanf("%f",&primeiraNota);
			fflush(stdin);
			
			printf("Insira Sua Segunda Nota: ");
			scanf("%f",&segundaNota);
			
			printf("Insira Sua Terceira Nota: ");
			scanf("%f",&terceiraNota);
			
			//Soma
			somaNotas=(primeiraNota+segundaNota+terceiraNota);			
			mediaFinal=(somaNotas/3);
			
			//Exibindo
			
			system("cls || clear");
			
			printf("========================================");
			
			
			
			printf("\nNome Do Aluno: %s \n",nomeAluno);
			printf("Idade Do Aluno: %d \n",idadeAluno);
			printf("Primeira Nota Do Aluno: %.1f\n",primeiraNota);
			printf("Segunda Nota Do Aluno: %.1f\n",segundaNota);	
			printf("Terceira Nota Do Aluno: %.1f\n",terceiraNota);
			//Media 
			printf("========================================");
			printf("\nMedia Final: %.1f \n",mediaFinal);
			
			//Switch Case ou if else		
			if(mediaFinal>=7){
				printf("Aluno Aprovado!!");
			}
			else{
				printf("Aluno Reprovado!!");
			}
			
			
			printf("\n========================================");
			
			
	return 0;
	
	
	
	
	
	
}
