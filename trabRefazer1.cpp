// Disciplina   : [Bases de Programação]
// Professor   : Rogerio Mandelli
// Descrição   : Programa para Simular uma maquina de emissão de fichas virtuais

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecem

    // Declaração de variaveis
    int dinheiro, total;
    int ficha100, ficha50, ficha20, ficha10, ficha5;
    int resto100, resto50, resto20, resto10;
    
    // Entrada de Dados - Interação com o usuario
    printf("============================= \n");
    printf("Bem-vindo ao programa de fichas virtuais!! \n");
    printf("============================= \n");
    printf("Fichas disponíveis para venda são:\n ");
    printf("5 \n");
    printf(" 10 \n");
    printf(" 20 \n");
    printf(" 50 \n");
	printf(" 100 \n");
	printf("============================= \n");
	printf("Informe o valor inteiro para adquirir em fichas: R$ ");
	scanf("%i", &dinheiro);
	
    //laço de repetição equanto o valor do resto for diferente de zero ficara repetindo
	while (dinheiro%5!=0)
	{
		printf("\nVocê digitou um valor invalido. Digite outro valor: ");
	    scanf("%i", &dinheiro);
	}    
	
    // area de calculo
    ficha100 = (dinheiro / 100);
    resto100 = (dinheiro % 100);

    ficha50 = (resto100 / 50);
    resto50 = (resto100 % 50);

    ficha20 = (resto50 / 20);
    resto20 = (resto50 % 20);

    ficha10 = (resto20 / 10);
    resto10 = (resto20 % 10);

    ficha5 = (resto10 / 5);
    
    
    total = ficha100 + ficha50 + ficha20 + ficha10 + ficha5;
    
    // Saida de dados
    printf("\nFichas de 100: %i \n", ficha100);
    printf("Fichas de 50:  %i \n", ficha50);
    printf("Fichas de 20:  %i \n", ficha20);
    printf("Fichas de 10:  %i \n", ficha10);
    printf("Fichas de 5:   %i \n", ficha5);
    printf("O total de fichas foi de: %i \n", total);
    


	
return 0;	
}
