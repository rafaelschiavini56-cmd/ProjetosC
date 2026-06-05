#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct RegCli // Define um tipo de dado (estrutura)
{
	char nome[30];
	char email[20];
	char plano[20];
	char end [40];
	char tel1[15];
	char tel2[15];
	int idade;
};

int main(){
	
	RegCli umCli; // Cria uma variável do tipo RegCli
	
//	cin >> (umCli.nome);
//	cout << (umCli.nome) << endl;
//	cin >> (umCli.idade);
//	cout << (umCli.idade) << endl;

    cout << "Digite o nome: " << endl;
    cin >> umCli.nome;
    
    cout << "Digite a idade: " << endl;
    cin >> umCli.idade;
    
    cout << "\nNome: " << umCli.nome;
    cout << "\nNome: " << umCli.idade;
    
		
return 0;	
}
