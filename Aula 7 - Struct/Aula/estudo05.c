#include <stdio.h>
#include <locale.h>

#define TAMANHO_NOME 50

typedef struct {
    int qtd_ingressos;
    float preco_ingresos;
    char nome_filme[TAMANHO_NOME + 1];
} TicketCinema;

TicketCinema inicializar_ticket(){
    return (TicketCinema){
        .qtd_ingressos = 30,
        .preco_ingresos = 20.39f,
        .nome_filme = "Passei em C"
    };
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    TicketCinema novo_ticket = inicializar_ticket();
    printf("Quantidade de Tickets: %d \n", novo_ticket.qtd_ingressos);
    printf("Preço de Tickets: %.2f \n", novo_ticket.preco_ingresos);
    printf("Nome do Filme: %s \n", novo_ticket.nome_filme);
}

