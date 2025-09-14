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

// Solicita um n�mero at� o usu�rio digitar um valor v�lido
int determina_tamanho(){
    int tamanho = 0;
    do{
        printf("\nQual � o tamanho do array? ");
        scanf("%d", &tamanho);
        if (tamanho <= 0){
            printf("\nErro: o tamanho do array deve ser positivo!\n\n");
        }
    }while(tamanho <= 0);
    return tamanho;
}

// Retorna o maior valor presente nesse array
int encontra_maior(int array[], int tamanho){
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

    int tamanho = 0;

    tamanho = determina_tamanho();

    int array[tamanho];

    // Entrada dos elementos do array
    for (int i = 0; i < tamanho; i++){
        printf("\nDigite o %d� elemento do array: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior_array = encontra_maior(array, tamanho);


    printf("\nO maior elemento do array � %d.",  maior_array);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
