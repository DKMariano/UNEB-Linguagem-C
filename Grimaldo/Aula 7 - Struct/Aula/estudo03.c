#include <stdio.h>
#include <locale.h>

#define TAMANHO_NOME 50


struct ticket_cinema {
    int num_ticket;
    float preco_ticket;
    char nome_filme [TAMANHO_NOME + 1];

};

int main(){
    setlocale(LC_ALL, "Portuguese");

    struct ticket_cinema part1 = (struct ticket_cinema){
        .num_ticket = 40,
        .preco_ticket = 12.50f,
        .nome_filme = "Tirei 10 em Calculo I",
    };

    printf("\nQuantidade de ingressos: %d", part1.num_ticket);
    printf("\nPreço do ingresso: R$ %.2f", part1.preco_ticket);
    printf("\nNome do filme: %s", part1.nome_filme);

}
