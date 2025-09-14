/********************************************************************************************
* Data: 13/09/2025                                                                          *
* Exercício: 003 da Aula 5 - Arrays e mais sobre funções                                    *
* Instituição de Ensino: UNEB                                                               *
* Disciplina: Linguagem C                                                                   *
* Professor: José Grimaldo                                                                  *
* Aluno: D. K. Mariano                                                                      *
* Descrição: Escreva uma função que inverta os elementos de um array. Escreva um teste para *
* comprovar o funcionamento. Escreva um teste para comprovar o funcionamento                *
********************************************************************************************/


#include <stdio.h>
#include <locale.h>
#define TAMANHO  4

/**
 * Função: inverter_array
 * ----------------------
 * Recebe um array original e cria uma cópia invertida dele em outro array.
 *
 * array: array original.
 * array_invertido: array de destino, que vai armazenar os elementos invertidos.
 * tamanho: quantidade de elementos do array.
 */
void inverter_array (int array[],int array_invertido[ ], int tamanho){
    int j = 0;
    for(int i = tamanho - 1; i >= 0; i--){
       array_invertido[j] = array[i];
       j++;
    }
}

/**
 * Função: imprimir_array
 * ----------------------
 * Exibe os elementos de um array no formato [ elemento1 elemento2 ... ].
 *
 * array: array a ser impresso.
 * tamanho: número de elementos do array.
 */
void imprimir_array(int array[], int tamanho){
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int array[TAMANHO] = {1, 9, 2, 7 };
    int array_invertido[TAMANHO];

    inverter_array (array,array_invertido,TAMANHO);

    printf("Array normal: ");
    imprimir_array(array, TAMANHO);

    printf("\n\nArray invertido: ");
    imprimir_array(array_invertido, TAMANHO);

    printf("\n\nPressione Enter para sair...");

    getchar();

    return 0;
}


