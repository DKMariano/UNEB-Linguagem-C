#include <stdio.h>
#include <locale.h>

#define TAMANHO_NOME 50

typedef struct Ingresso {
    int qtd_filme;
    float preco_filme;
    char nome_filme[TAMANHO_NOME + 1];
} Ingresso;



int main(void){
    setlocale(LC_ALL, "Portuguese");

    Ingresso part1 = (Ingresso){
        .qtd_filme = 100,
        .preco_filme = 20,
        .nome_filme = "Tirei 10 em Calculo e em C"
    };

    printf("\nQuantidade de ingresso: %d", part1.qtd_filme);
    printf("\nPreço do filme: R$ %.2f", part1.preco_filme);
    printf("\nNome do filme: %s", part1.nome_filme);

    return 0;

}
