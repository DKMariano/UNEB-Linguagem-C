/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 002 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Escreva uma função que recebe um ponteiro para um inteiro e  *
* dobra seu valor                                                         *
**************************************************************************/

#include <stdio.h>
#include <locale.h>

int dobraValor(int *p){
    *p = 2* *p;
}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int x = 10;

    int *ptr = &x;

    printf("Valor ptr antes da função: %d\n", *ptr);

    int dobro = dobraValor(ptr);

    printf("Valor ptr após da função: %d\n", *ptr);

}
