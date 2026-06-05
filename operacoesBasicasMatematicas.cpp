#include<iostream>
using namespace std;

int main(){
	
	int A, B, soma, sub, div, mult;
	
	
	cout << "Digite o primeiro valor: " << endl;
	cin >> A;
	cout << "Digite o segundo valor: " << endl;
	cin >> B;
	
	soma= A + B;
	sub= A - B;
	div= A / B;
	mult= A * B;
	
	cout << "Resultado da soma desses numeros: " << soma << endl;
	cout << "Resultado subtracao desses numeros: " << sub << endl;
	cout << "Resultado da divisao desses numeros: " << div << endl;
	cout << "Resultado da multiplicação desses numeros: " << mult << endl;
	
	
	
	return  0;
}
