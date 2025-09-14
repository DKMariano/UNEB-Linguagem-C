/**********************************************************************************************
* Data: 13/09/2025                                                                            *
* Exerc�cio: 002 da Aula 5 - Arrays e mais sobre fun��es                                      *
* Institui��o de Ensino: UNEB                                                                 *
* Disciplina: Linguagem C                                                                     *
* Professor: Jos� Grimaldo                                                                    *
* Aluno: D. K. Mariano                                                                        *
* Descri��o: Escreva uma fun��o que encontre e retorne o maior valor em um array de inteiros. *
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

    printf("O maior elemento do array � %d.", maior_array);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
