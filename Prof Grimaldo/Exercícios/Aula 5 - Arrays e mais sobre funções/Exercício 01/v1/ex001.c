/********************************************************************************************
* Data: 13/09/2025                                                                          *
* Exerc�cio: 001 da Aula 5 - Arrays e mais sobre fun��es                                    *
* Institui��o de Ensino: UNEB                                                               *
* Disciplina: Linguagem C                                                                   *
* Professor: Jos� Grimaldo                                                                  *
* Aluno: D. K. Mariano                                                                      *
* Descri��o: Desenvolva uma fun��o em C que, dado um array de inteiros, calcule e retorne o *
* produto de todos os seus elementos. Escreva um teste para comprovar o funcionamentos      *
********************************************************************************************/


#include <stdio.h>
#include <locale.h>
#define TAMANHO  4

// Fun��o que calcula o produto dos elementos de um array de inteiro
int produto_array(int array[], int tamanho){
    int produto = 1;
    for(int i = 0; i < tamanho; i++){
        produto *=  array[i];
    }
    return produto;
}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int array[TAMANHO] = {1, 2, 3, 4};
    int  resultado = 0;

    resultado = produto_array(array, TAMANHO);

    printf("O produto dos elementos do array � %d.", resultado);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
