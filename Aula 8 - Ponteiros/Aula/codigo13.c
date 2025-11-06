#include <stdio.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

void imprimirPessoa (Pessoa *pptr){
    printf("Nome: %s\n", pptr->nome);
    printf("Nome: %d\n", (*pptr).idade);

}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1 = {"José", 52};

    Pessoa *ptr = &p1;

    imprimirPessoa(ptr);


    return 0;
}
