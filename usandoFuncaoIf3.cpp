#include<iostream>
using namespace std;

int main(){
	int n1, n2, media;
	
	
	cout << "Digite uma nota: " << endl;
	cin >> n1;
    cout << "Digite outra nota: " << endl;
    cin >> n2;
    
    media=(n1 + n2)/2;
	
	if(media >= 6){
       cout << "Aprovado" << endl;
    }else{
    	cout << "Reprovado" << endl;
	} 

	
	return 0;
}
