/************************************************************************************************
* Data: 19/09/2025                                                                              *
* Exerc�cio: 005 da Aula 5 - Arrays e mais sobre fun��es                                        *
* Institui��o de Ensino: UNEB                                                                   *
* Disciplina: Linguagem C                                                                       *
* Professor: Jos� Grimaldo                                                                      *
* Aluno: D. K. Mariano                                                                          *
* Descri��o: Dado um vetor de inteiros encontre o primeiro elemento que aparece apenas uma vez. *
* Voc� n�o deve utilizar estruturas de dados auxiliares. Escreva uma fun��o em C que encontre e *
* retorne este primeiro elemento �nico. Exemplo:                                                *
*     Entrada: v = [2, 2, 5, 5, 5, 3, 1]                                                        *
*     Sa�da: 3                                                                                  *
*     Fun��o: int elemento_unico(int v[], int n);                                               *
************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <locale.h>
#define TAMANHO 7

void elemento_unico(int array[], int tamanho){
    int contador_repeticoes = 0;
    int elemento_unico = 0;


    for(int i = 0; i < TAMANHO; i++ ){
        contador_repeticoes = 0;
        elemento_unico = array[i];
        for(int j = 0; j < TAMANHO; j++){
            if(elemento_unico == array[j]){
                contador_repeticoes ++;
            }
        }
        if (contador_repeticoes == 1){
            printf("1� Elemento �nico: %d \n", elemento_unico);
            break;
        }
    }
}

int main (void){
    setlocale(LC_ALL, "Portuguese");
    int v[TAMANHO] = {2, 2, 5, 5, 5, 3, 1};

    elemento_unico(v, TAMANHO);


    printf("\nPressione enter pra sair");
    getchar();
    return 0;
}
