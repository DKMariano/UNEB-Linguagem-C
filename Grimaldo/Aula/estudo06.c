#include <stdio.h>
#include <locale.h>

#define TAMANHO_NOME 50

typedef struct {
    int qtd_ingresso;
    float preco_ingresso;
    char nome_filme[TAMANHO_NOME + 1];
} IngressosCinema;

IngressosCinema criar_ingresso(){
   return(IngressosCinema){
    .qtd_ingresso = 100,
    .preco_ingresso = 20.56,
    .nome_filme = "Passei em C"
   };
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    IngressosCinema novo_ingresso = criar_ingresso();
    printf("Quantidade de Ingresso: %d", novo_ingresso.qtd_ingresso);
    printf("\nPreço do Ingresso: %f", novo_ingresso.preco_ingresso);
    printf("\nNome do Filme: %s", novo_ingresso.nome_filme);

    return 0;
}

