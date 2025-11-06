/************************************************************************************
* Data: 21/09/2025                                                                  *
* Exercício: 003 da Aula 3 - Operadores e Controle de Fluxo                         *
* Instituição de Ensino: UNEB                                                       *
* Disciplina: Linguagem C                                                           *
* Professor: José Grimaldo                                                          *
* Aluno: D. K. Mariano                                                              *
* Descrição: Faça um algoritmo em C que leia um número inteiro e determine se ele é *
* par ou ímpar.                                                                     *                                                                *
************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &num);

    printf("Digite um número inteiro qualquer: ");
    for(int i = 1; i < num; i++){
        if(i % 2 != 0){
            printf("\n%d", i);
        }
    }

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;

}
