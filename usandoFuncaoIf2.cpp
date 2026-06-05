#include<iostream>
using namespace std;

int main(){
	
	int idade;
	
	cout << "Digite a idade: " << endl;
	cin >> idade;
	
	if(idade >= 16){
	    cout << "Voce pode votar " << endl;
	} else {
		cout << "Voce nao pode votar " << endl;
	}
	
	return 0;
}
