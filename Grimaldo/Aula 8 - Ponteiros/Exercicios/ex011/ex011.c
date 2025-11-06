/********************************************************************************
* Data: 02/11/2025                                                              *
* Exercício: 11 – Aula 8: Ponteiro                                              *
* Instituição de Ensino: UNEB                                                   *
* Disciplina: Linguagem de Programação em C                                     *
* Professor: José Grimaldo                                                      *
* Aluno: D. K. Mariano                                                          *
* Descrição: Criar uma função em C para gerenciar o saldo das contas poupança   *
* e corrente. A função irá atualizar o saldo se a operação for válida, ou seja, *
* se o saldo não ficar negativo após a atualização.                             *
********************************************************************************/

#include <stdio.h>
#include <locale.h>

typedef struct{
    double saldo_poupanca;
    double saldo_corrente;
} Contas;

void atualizar_saldo(Contas *contas, char tipo_conta, double valor){
    printf("=== EXTRATO === \n");
    switch(tipo_conta){
        case 'P':
            if(contas->saldo_poupanca >= valor){
                printf("Operação bem sucedida! \n");
                (*contas).saldo_poupanca -= valor;
                printf("Seu saldo atual da sua poupança é: R$ %.2f \n", contas->saldo_poupanca);
            }else{
                printf("Saldo insuficiente para realizar a operação! \n");
            }
            break;
        case 'C':
            if(contas->saldo_corrente >= valor){
                printf("Operação bem sucedida! \n");
                (*contas).saldo_corrente -= valor;
                printf("Seu saldo atual da sua conta-corrente é: R$ %.2f \n", contas->saldo_corrente);
            }else{
                printf("Saldo insuficiente para realizar a operação! \n");
            }
        break;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    Contas minhas_contas= {1000.0, 5000.0};

    Contas *contas = &minhas_contas;

    atualizar_saldo(contas, 'C', 5000.0);


    return 0;
}
