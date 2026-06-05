#include <stdio.h>

int main(){
	int x = 10;
	int* p = &x; //ponteiro p recebe endereço de x
	
	printf("Valor de x: %d\n", x);
	printf("Endereco de x: %p\n", &x);
	printf("Conteudo de p (o endereco): %p\n", p);	
	printf("Valor apontado por p: %d\n", *p);
	
 return 0;	
}
