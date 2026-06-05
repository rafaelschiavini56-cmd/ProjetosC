#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Territorio{
	char nome[30];
	char cor[10];
	int tropas;
};

int main(){
	
	struct Territorio territorios[5];
	
	for(int i = 0; i < 5; i++){
	    
		printf("\n=== Cadastro do Territorio %d ===\n", i + 1);
		
		printf("Digite o nome do territorio: ");
		scanf("%s", territorios[i].nome);
		
		printf("Digite o nome do exercito: ");
		scanf("%s", territorios[i].cor);
		
		printf("Digite a quantidade de tropas: ");
		scanf("%d", territorios[i].tropas);
		
}
    printf("\n\n==== TERRITORIOS CADASTRADOS ====\n");
    
    for(int i = 0; i < 5; i++){
	    
		printf("\nTerritorio %d\n", i + 1);
		printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
}
return 0;
}
