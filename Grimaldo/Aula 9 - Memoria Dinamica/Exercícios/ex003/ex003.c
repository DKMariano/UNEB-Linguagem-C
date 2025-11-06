/***************************************************************************
* Data: 02/11/2025                                                         *
* Exercício: 003 – Aula 9: Memória Dinâmica                                *
* Instituição de Ensino: UNEB                                              *
* Disciplina: Linguagem de Programação em C                                *
* Professor: José Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descrição: Escreva uma função que tem um parâmetro inteiro com nome x de *
* entrada. Aloque um vetor de inteiros com 5 vezes o tamanho. Inicialize o *
* vetor com um valor diferente de zero.                                    *
***************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



void alocacao(int x) {
    x *=5;
    int *ptrX = (int *) malloc(x * sizeof(int));

    if(ptrX == NULL){
        printf("Erro ao alocar memória. \n");
        return;
    }

    printf("ptrX = { ");
    for(int i = 0; i < x; i++){
        ptrX[i] = i + 1;
        if(i == x - 1){
            printf("%d ", ptrX[i]);
        }else{
            printf("%d, ", ptrX[i]);
        }
    }
    printf("} \n");
    printf("Total de elementos: %d \n", x);

    free(ptrX);
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int x = 2;

    alocacao(x);



    return 0;
}
