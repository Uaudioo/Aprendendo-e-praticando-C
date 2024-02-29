#include <stdio.h>
#include <stdlib.h>
int main (){

float numero1,numero2;
float resultado;
float operacao;
char soma,div,mult,sub;

printf("====================Math Cheat====================");

printf("\nInsira o Primeiro Numero: ");
scanf("%f",&numero1);
fflush(stdin);

printf("Insira o Segundo Numero: ");
scanf("%f",&numero2);
//Pedindo a operacao

printf("Qual Operacao Deseja? \n(OBS):\n1-Adicao \n2-Subtracao \n3-Divisao \n4-Multiplicacao");
scanf("%f",&operacao);

system("cls");

printf("================================================================================");
//Soma
if(operacao ==1){
operacao=(numero1+numero2);
	printf("\nResultado Soma: %f",operacao);	
} else{
	
}


//Sub
if(operacao ==2){
operacao=(numero1-numero2);
	printf("\nResultado Sub: %f",operacao);
}else{
	
}

//Div
if(operacao ==3){
	operacao=(numero1/numero2);
	printf("\nResultado Div: %f",operacao);
}else{
	
}
//mult
if(operacao ==4){
	operacao=(numero1*numero2);
	printf("\nResultado Mult: %f",operacao);
}else{
	
}

printf("\n================================================================================");


}
