#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	
	int x = 5;
	
	cout << ("Endereço fisico da varivael x -> ") << endl;
	cout << (&x); // Mostra o endereço de memória de x
	
	cout << (" \nConteudo da celula do endereco fisico da variavel x-> ") << endl;
	cout << (x);
	
	return 0;
		
	
}
