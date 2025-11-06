/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 001 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Declare uma variável ponto-flutuante e um ponteiro para esse *
* ponto-flutuante. Atribua o endereço da variável ao ponteiro e imprima o *
* valor do ponto-flutuante usando tanto a variável quanto o ponteiro.     *
**************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    float x = 15.78;

    float *ptr = &x;

    printf("Valor de x usando (variável): %f \n", x);
    printf("Valor de x usando (ponteiro): %f \n", *ptr);
    printf("Endereço de x (variável): %p \n", &x);
    printf("Endereço de x (ponteiro): %p \n", ptr);

    return 0;
}
