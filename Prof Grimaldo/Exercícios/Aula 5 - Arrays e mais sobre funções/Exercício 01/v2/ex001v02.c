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

// Solicita um n�mero at� o usu�rio digitar um valor v�lido
int determina_tamanho() {
    int tamanho = 0;
    do {
        printf("Qual � o tamanho do array? ");
        scanf("%d", &tamanho);
        if (tamanho <= 0) {
            printf("Erro: o tamanho do array deve ser positivo!\n\n");
        }
    } while (tamanho <= 0);

    return tamanho;
}

// Fun��o que calcula o produto dos elementos de um array de inteiros
int produto_array(int array[], int tamanho) {
    int produto = 1;
    for (int i = 0; i < tamanho; i++) {
        produto *= array[i];
    }
    return produto;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int tamanho = determina_tamanho();
    int array[tamanho];

    // Entrada dos elementos do array
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d� elemento do array: ", i + 1);
        scanf("%d", &array[i]);
    }

    int produto = produto_array(array, tamanho);

    printf("\n\nO produto dos elementos do array � %d.", produto);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}

