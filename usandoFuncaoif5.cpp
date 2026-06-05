#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int n1,n2,res;
	char opc;
	
	inicio:
	
	system("cls");
	
	
	cout <<"Digite o valor da primeira nota: " << endl;
	cin >> n1;
	cout <<"Digite o valor da segunda nota: " << endl;
	cin >> n2;
	
	res=n1+n2;
	
	if(res >=60 ){
		cout <<"Aluno Aprovado " << endl;
	}else if(res >= 40) {
		cout <<"Aluno em Recuperacao " << endl;
	}else{
		cout <<"Aluno Reprovado " << endl;
	}

    cout <<"Quer digitar outras notas? [s/n] " << endl;
    cin >> opc;
    
    if(opc == 's' or opc=='S'){
    	goto inicio;
	}


return 0;
}
