/*************************************************************************************************
* Data: 14/09/2025                                                                               *
* Exerc�cio: 005 da Aula 5 - Arrays e mais sobre fun��es                                         *
* Institui��o de Ensino: UNEB                                                                    *
* Disciplina: Linguagem C                                                                        *
* Professor: Jos� Grimaldo                                                                       *
* Aluno: D. K. Mariano                                                                           *
* Descri��o: Escreva um programa que mescle dois arrays em um �nico array.                       *
* Instru��es:                                                                                    *
*     - Defina dois arrays de inteiros.                                                          *
*     - Escreva uma fun��o void mesclaArrays(int arr1[], int tamanho1, int arr2[], int tamanho2, *
*     int resultado[]) que mescle arr1 e arr2 em resultado.                                      *
*     - Na fun��o main(), chame mesclaArrays() e imprima o array resultante.                     *
*************************************************************************************************/

#include <stdio.h>
#define TAMANHOARR1 4
#define TAMANHOARR2 7
#define TAMANHORESUL (TAMANHOARR1 + TAMANHOARR2)

void mesclaArrays(int arr1[], int tamanho1, int arr2[], int tamanho2, int resultado[]){
    int i = 0, j = 0, k = 0;

    // intercala enquanto ambos tiverem elementos
    while(i < tamanho1 && j < tamanho2){
        resultado[k] = arr1[i];
        k++;
        i++;
        resultado[k] = arr2[j];
        k++;
        j++;
    }

    while(i < tamanho1){
        resultado[k] = arr1[i];
        k++;
        i++;
    }

    while(j < tamanho2){
        resultado[k] = arr2[j];
        k++;
        j++;
    }
}

int main(void){
    int arr1[TAMANHOARR1] = {0, 2, 4, 6 };
    int arr2[TAMANHOARR2] = {1, 3, 5, 7, 8, 9, 10};
    int resultado[TAMANHORESUL];

    mesclaArrays(arr1, TAMANHOARR1, arr2, TAMANHOARR2, resultado);


    printf("\nArr1: [ ");
    for(int l = 0; l < TAMANHOARR1;l++){
        printf("%d  ", arr1[l]);
    }
    printf("]");


    printf("\nArr2: [ ");
    for(int l = 0; l < TAMANHOARR2;l++){
        printf("%d  ", arr2[l]);
    }
    printf("]");


    printf("\nResultado: [ ");
    for(int l = 0; l < TAMANHORESUL;l++){
        printf("%d  ", resultado[l]);
    }
    printf("]");

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;

}


