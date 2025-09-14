/********************************************************************************************
* Data: 13/09/2025                                                                          *
* Exerc�cio: 003 da Aula 5 - Arrays e mais sobre fun��es                                    *
* Institui��o de Ensino: UNEB                                                               *
* Disciplina: Linguagem C                                                                   *
* Professor: Jos� Grimaldo                                                                  *
* Aluno: D. K. Mariano                                                                      *
* Descri��o: Escreva uma fun��o que inverta os elementos de um array. Escreva um teste para *
* comprovar o funcionamento. Escreva um teste para comprovar o funcionamento                *
********************************************************************************************/


#include <stdio.h>
#include <locale.h>


// Fun��o que solicita ao usu�rio o tamanho do array.
// Ela s� permite valores positivos e for�a o usu�rio a digitar at� ser v�lido.
int defina_tamanho(){
    int tamanho = 0;
    do{
        printf("\nQual � o tamanho do array? ");
        scanf("%d", &tamanho);

        if(tamanho <= 0){
            printf("\nErro: o tamanho do array deve ser positivo!\n\n");
        }
    }while (tamanho <= 0);

    return tamanho;
}

// Fun��o que inverte os elementos de um array.
// array[] -> original
// array_invertido[] -> resultado da invers�o
// tamanho -> quantidade de elementos
void inverter_array (int array[],int array_invertido[ ], int tamanho){
    int j = 0;
    for(int i = tamanho - 1; i >= 0; i--){
       array_invertido[j] = array[i];
       j++;
    }
}

// Fun��o que imprime os elementos de um array no formato [ a b c ... ]
void imprimir_array(int array[], int tamanho){
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 0;

    tamanho = defina_tamanho();

    int array[tamanho];
    int array_invertido[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("\nDigite o %d� elemento do array: ", i + 1);
        scanf("%d", &array[i]);
    }

    inverter_array (array,array_invertido,tamanho);

    printf("\nArray normal: ");
    imprimir_array(array, tamanho);

    printf("\nArray invertido: ");
    imprimir_array(array_invertido, tamanho);

    printf("\nPressione Enter para sair...");

    getchar();

    return 0;
}
