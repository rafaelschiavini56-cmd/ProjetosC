#include <iostream> // Biblioteca de entrada e saída
using namespace std; // Evita usar std::

// Função que calcula a média
void calcularMedia(float v1, float v2, float &x) {
    x = (v1 + v2) / 2; // Calcula a média e guarda em x (referência)
}

int main() {

    float valor1, valor2, media; // Declara variáveis

    cout << "Digite o primeiro valor: ";
    cin >> valor1; // Lê o primeiro valor

    cout << "Digite o segundo valor: ";
    cin >> valor2; // Lê o segundo valor

    calcularMedia(valor1, valor2, media); // Chama a função

    cout << "A media dos valores eh: " << media << endl; // Mostra o resultado

    return 0; // Finaliza o programa
}
