#include <stdio.h>
#include <stdlib.h>

// defino e estrutura para um aluno
// struct Aluno {

// usando typedef para criar o tipo aluno
typedef struct{
    char nome[50];
    int idade;
    float media;

} Aluno;

int main(){ 
    // criando e inicializando uma variavel do tipo aluno
    Aluno aluno1 = {"Joao", 20, 8.5};

    // acessando dados com o operador '.'
    printf("Aluno: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Idade: %.2f\n", aluno1.media);


return 0;
}
