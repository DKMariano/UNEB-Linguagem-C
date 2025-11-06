/*******************************************************************************
* Data: 01/11/2025                                                             *
* Exercício: 007 – Aula 8: Ponteiro                                            *
* Instituição de Ensino: UNEB                                                  *
* Disciplina: Linguagem de Programação em C                                    *
* Professor: José Grimaldo                                                     *
* Aluno: D. K. Mariano                                                         *
* Descrição: Escreva uma função void multiplicaPorDois(int *arr, int tamanho)  *
* que multiplica cada elemento de um array por 2. No main, declare um array    *
* int dados[] = {1, 3, 5, 7, 9};, chame a função e imprima o array modificado. *
*******************************************************************************/

#include <stdio.h>
#include <locale.h>

void multiplicaPorDois(int *arr, int tamanho){
    for (int i = 0; i < tamanho; i++){
        *(arr + i) *= 2;
    }
}

void imprimeArray(int *arr, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%dºElemento do Array: %d \n", i + 1, *(arr + i));
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dados[] = {1, 3, 5, 7, 9};

    int tamanho = sizeof(dados) / sizeof(dados[0]);

    int *ptr = &dados[0];

    printf("Array normal: \n");
    imprimeArray(ptr, tamanho);

    multiplicaPorDois(ptr, tamanho);

    printf("Array dobrado: \n");

    imprimeArray(ptr, tamanho);

    return 0;
}
