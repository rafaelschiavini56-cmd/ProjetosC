#include<iostream>
using namespace std;

int main(){
	int nota;
	 
	int n1, n2, rec, media, mediaFinal;
	
	cout << "Digite uma nota: " << endl;
	cin >> n1;
	
	cout << "Digite  outra nota: " << endl;
    cin >> n2;
	
	media=(n1+n2)/2;
	
	
	if(media >= 6){
		cout << "Aprovado" << endl;
	} else{
		cout << "Recuperacao" << endl;
    } 
    
    
	cout << "Digite a nota da recuperacao: " << endl;
    cin >> rec;
    
    
    
    

   // AQUI ELE PRECISA TIRAR NOTA MAIOR OU IGUAL QUE A MEDIA NA RECUPERÇÃO PARA PASSAR
   
   /* if(rec >= media){
    	cout << "Apravado" << endl;
	}else{
		cout << "Reprovado" << endl;
	} 

	
	

	//AQUI O ALUNO PRECISA SOMAR A NOTA DA RECUPERAÇÃO MAIS A MÉDIA E DIVIDIR POR DOIS  PARA PASSAR DE ANO
    
	mediaFinal=(media+rec)/2;
    
	 if(mediaFinal >= 6){
        cout << "Aprovado" << endl;
	}else{
		cout << "Reprovado" << endl;
	} */
	
	
	
 return 0;	
}
