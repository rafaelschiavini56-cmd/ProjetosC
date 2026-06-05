// Disciplina   : [Bases de Programação]
// Professor   : Rogério Mandelli
// Descrição   : Programa para Simular uma calculadora

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.
#include <math.h>

int main()
{
	setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem
	// Declaração de Variaveis
	float numero1, numero2;
	float soma, divisao, multiplicacao, potenciacao, subtracao;
	int opcao;
	
	printf("============================= \n");
	printf("Calculadora \n");
	printf("============================= \n");
	
	// Inicio da estrutra de faça enquanto 
	do
	{
	
		printf("(1) Soma \n");
		printf("(2) Subtração \n");
		printf("(3) Divisão \n");
		printf("(4) Multiplicação \n");
		printf("(5) potenciação \n");
		printf("(6) Finalizar \n");
		printf("\n");
		printf("========================= \n");
	
		printf("Digite uma das opções acima: ");
		scanf("%i", &opcao);
	
		// estrutura de escolha
		switch (opcao)
	{
		case 1:
			printf("======== \n");
			printf("Soma \n");
			printf("======== \n");
			printf("Digite o primeiro número: ");
			scanf("%f", &numero1);
			fflush(stdin); // comando para limpar buffer do teclado
			printf("Digite o segundo número: ");
			scanf("%f", &numero2);
			fflush(stdin);

			soma = numero1 + numero2;

			printf("A soma entre os dois números é: %.3f \n", soma);
			printf("==================================== \n");
			break;
		case 2:
			printf("======== \n");
			printf("Subtração \n");
			printf("======== \n");
			printf("Digite o primeiro número: ");
			scanf("%f", &numero1);
			fflush(stdin);
			printf("Digite o segundo número: ");
			scanf("%f", &numero2);
			fflush(stdin);

			subtracao = numero1 - numero2;

			printf("A subtração entre os dois números é: %.3f \n", subtracao);
			printf("==================================== \n");
			break;
		case 3:
			printf("======== \n");
			printf("Divisão \n");
			printf("======== \n");
			printf("Digite o primeiro número: ");
			scanf("%f", &numero1);
			fflush(stdin);
			printf("Digite o segundo número: ");
			scanf("%f", &numero2);
			fflush(stdin);

			while(numero2 == 0) 
			{
				printf("------------------------- \n");
	    		printf("Não existe divisão por 0. \n");
	    		printf("Digite outro valor: ");
	    		scanf("%f", &numero2);
				fflush(stdin);
	    		printf("------------------------- \n");
	    		
			}

		    divisao = numero1/numero2;

			printf("A divisão entre os dois números é: %.3f \n", divisao);
			printf("==================================== \n");
			break;
			
		case 4:
			printf("======== \n");
			printf("Multiplicação \n");
			printf("======== \n");
			printf("Digite o primeiro número: ");
			scanf("%f", &numero1);
			fflush(stdin);
			printf("Digite o segundo número: ");
			scanf("%f", &numero2);
			fflush(stdin);

			multiplicacao = numero1*numero2;

			printf("A multiplicação entre os dois números é: %.3f \n", multiplicacao);
			printf("==================================== \n");
			break;
		case 5:
			printf("======== \n");
			printf("Potenciação \n");
			printf("======== \n");
			printf("Digite o primeiro número: ");
			scanf("%f", &numero1);
			fflush(stdin);
			printf("Digite o segundo número: ");
			scanf("%f", &numero2);
			fflush(stdin);

			potenciacao = pow(numero1,numero2);

			printf("A potenciação entre os dois números é: %.3f \n", potenciacao);
			printf("==================================== \n");
			break;
		case 6:
			printf("Programa finalizado! \n");
			break;
		// Caso o usuario digite alguma coisa que não esta na estrutura de escolha
		default:
			printf("============================== \n");
			printf("Nï¿½mero invalido.. Digite outro:  \n");
			printf("============================== \n"); 
	}
	
		//Fim da estrutura faaça enquanto
    }  while (opcao != 6);
	
  return 0;
}

