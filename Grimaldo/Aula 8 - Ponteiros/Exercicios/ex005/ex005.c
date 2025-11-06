/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 005 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Dado um array int numeros[5] = {2, 4, 6, 8, 10};, use um     *
* ponteiro para imprimir todos os seus elementos.                         *
**************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int numeros[5] = {2, 4, 6, 8, 10};

    int *ptr = &numeros[0];

    printf("Elementos do array numeros: \n");

    for(int i = 0; i < 5; i++){
        printf("%d Elemento do array numeros: %d \n", i + 1, *(ptr + i));
    }

    return 0;
}
