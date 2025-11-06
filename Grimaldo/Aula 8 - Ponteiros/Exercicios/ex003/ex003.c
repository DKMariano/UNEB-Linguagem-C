/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 003 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Declare uma variável inteira num com o valor 10. Em seguida, *
* declare um ponteiro pNum que aponta para num. Imprima o valor de num    *
* usando o ponteiro pNum.                                                 *
**************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 10;

    int *pNum = &num;

    printf("Valor de num(variável): %d \n", num);
    printf("Valor de num(ponteiro): %d \n", *pNum);


    return 0;
}
