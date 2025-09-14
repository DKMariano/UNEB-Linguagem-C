/**********************************************************************************************
* Data: 13/09/2025                                                                            *
* Exercício: 002 da Aula 5 - Arrays e mais sobre funções                                      *
* Instituição de Ensino: UNEB                                                                 *
* Disciplina: Linguagem C                                                                     *
* Professor: José Grimaldo                                                                    *
* Aluno: D. K. Mariano                                                                        *
* Descrição: Escreva uma função que encontre e retorne o maior valor em um array de inteiros. *
* Escreva um teste para comprovar o funcionamento                                             *
**********************************************************************************************/


#include <stdio.h>
#include <locale.h>
#define TAMANHO  4

// Retorna o maior valor presente nesse array
int  encontra_maior(int array[], int tamanho){
    int  maior = array[0];
    for (int i = 0; i < tamanho; i++){
        if(array[i]> maior){
            maior = array[i];
        }
    }
    return maior;
}



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int array[TAMANHO] = {-1, -9, -2, -7 };

    int maior_array = 0;

    maior_array =  encontra_maior(array, TAMANHO);

    printf("O maior elemento do array é %d.", maior_array);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
