#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese"); //fun��o apra deixar a exibi��o na linguagem desejada
	
	int  res, num1, num2, op; //Variavies inteira
	
	printf ("*********Digite uma das op��es********* \n 1-Soma \n 2-Subtra��o \n");
		scanf("%d", &op);

	if (op ==1){ //Nesse if foi fieto uma "verifica��o", para que o usuario possa escolher a op��es soma
	
		printf ("*********Soma********* \nDigite um numeo: ");
			scanf("%d", &num1);
		
		printf ("Digite um numeo: ");
			scanf("%d", &num2);
		
		res = (num1 + num2);
		printf ("O resultado da soma �:  %d", res);
		
	}else if (op ==2) { //Nesse if foi fieto uma "verifica��o", para que o usuario possa escolher a op��es subtra��o
		
		printf ("*********Subtra��o********* \nDigite um numeo: ");
			scanf("%d", &num1);
			
		printf ("Digite um numeo: ");
			scanf("%d", &num2);
			
		res = (num1 - num2);
		printf ("O resultado da subtra��o �:  %d", res);
			
	}else {
		
		printf("Digite uma das op��es valida!!"); //Caso o usuario n�o digitar nenhuma das op��es ira exibir essa mensagem na tela
	}

return 0;
}
