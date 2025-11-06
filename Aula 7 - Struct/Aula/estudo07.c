#include <stdio.h>
#include <string.h>

#define TAMANH0_MAXIMO 50

typedef struct{
    char nome[TAMANH0_MAXIMO + 1];
    char sobrenome[TAMANH0_MAXIMO +1];
} NomePessoa;

typedef struct{
    int id;
    int idade;
    NomePessoa nome_completo;
} Estudante;

int main(void){
    Estudante aluno1;

    aluno1.id = 1;
    aluno1.idade = 20;

    strcpy(aluno1.nome_completo.nome, "Dimitrius");
    strcpy(aluno1.nome_completo.sobrenome, "Khouri");

    printf("\nID: %d", aluno1.id);
    printf("\nNome: %s", aluno1.nome_completo.nome);
    printf("\nSobrenome: %s", aluno1.nome_completo.sobrenome);
    printf("\nIdade: %d", aluno1.idade);
    return 0;
}
