#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(){
	
	int num1,i;
	setlocale(LC_ALL,"");
	
	
	
	printf("Insira Um Número: ");
	scanf("%d",&num1);
	
	
	for(i=1;i<=10;i++){
		printf("\n %ix%i=%i",num1,i,num1*i);
	}
	
	return 0;
}
