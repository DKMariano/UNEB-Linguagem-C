/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 004 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Dada uma variável inteira `contagem = 5`, use um ponteiro    *
* para incrementar seu valor em `1` e imprima o valor atualizado.         *
**************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int contagem = 5;

    int *ptr = &contagem;

    printf("Contagem antes do incremento: %d \n", *ptr);

    *ptr += 1;

    printf("Contagem após do incremento: %d \n", *ptr);

    return 0;
}
