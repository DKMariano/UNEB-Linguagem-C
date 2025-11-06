#include <stdio.h>
#include <locale.h>

#define TAMANHO_NOME 50

struct Ingresso{
    int num_tickets;
    float preco_tickets;
    char nome_filme[TAMANHO_NOME + 1];
};

struct Ingresso part1 = {30, 10.50f, "Tirei 10 em C"};



int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("\nQuantidade de tickets: %d", part1.num_tickets);
    printf("\nPreço dos tickets: R$ %.2f", part1.preco_tickets);
    printf("\nNome do filme: %s", part1.nome_filme);
}

