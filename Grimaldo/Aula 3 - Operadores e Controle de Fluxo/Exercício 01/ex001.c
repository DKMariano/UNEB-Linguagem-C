/******************************************************************************
* Data: 20/09/2025                                                            *
* Exercício: 001 da Aula 3 - Operadores e Controle de Fluxo                   *
* Instituição de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: José Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descrição: Faça um programa que implemente um menu onde o usurário deverá   *
* selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá *
* solicitar uma nova opção. [Marcelo Cendron, IFC]                            *
******************************************************************************/


#include <stdio.h>
#include <locale.h>


void imprimir_menu(){
    printf("\n=== MENU ===");
    printf("\n0- Alguma coisa");
    printf("\n1- Outra coisa");
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    imprimir_menu();

    int opcao = -1;

    do{
        printf("\n\n\nEscolha uma opçao: ");
        scanf("%d", &opcao);
        if(opcao != 0 && opcao !=1){
            printf("Erro: Opção Inválida!");
        }


    }while (opcao != 0 && opcao !=1);

    printf("\nParábens, você digitou uma opção válida!");


    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
