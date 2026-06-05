#include<iostream>
using namespace std;

int main(){
	
	int p, q, g, s;
	cout << "Digite o numero de pessoas disponiveis: " << endl;
	cin >> p;
	
	cout << "Agora digite o nuemero de pessoas por grupo: " << endl;
	cin >> q;
	
	g= p/q;
	s= p%q;
		
	cout << "Foram formados " << g <<  " grupos de " << q << " pesssoas" << endl;
	cout << "E sobrou " << s << " pessoas" << endl;
	
	return 0; 
}
