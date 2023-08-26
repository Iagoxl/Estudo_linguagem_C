#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese"); //função apra deixar a exibição na linguagem desejada
	
	int  res, num1, num2, op; //Variavies inteira
	
	printf ("*********Digite uma das opções********* \n 1-Soma \n 2-Subtração \n");
		scanf("%d", &op);

	if (op ==1){ //Nesse if foi fieto uma "verificação", para que o usuario possa escolher a opções soma
	
		printf ("*********Soma********* \nDigite um numeo: ");
			scanf("%d", &num1);
		
		printf ("Digite um numeo: ");
			scanf("%d", &num2);
		
		res = (num1 + num2);
		printf ("O resultado da soma é:  %d", res);
		
	}else if (op ==2) { //Nesse if foi fieto uma "verificação", para que o usuario possa escolher a opções subtração
		
		printf ("*********Subtração********* \nDigite um numeo: ");
			scanf("%d", &num1);
			
		printf ("Digite um numeo: ");
			scanf("%d", &num2);
			
		res = (num1 - num2);
		printf ("O resultado da subtração é:  %d", res);
			
	}else {
		
		printf("Digite uma das opções valida!!"); //Caso o usuario não digitar nenhuma das opções ira exibir essa mensagem na tela
	}

return 0;
}
