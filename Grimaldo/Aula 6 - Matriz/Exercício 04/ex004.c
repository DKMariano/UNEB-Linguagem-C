/******************************************************************************
* Data: 20/09/2025                                                            *
* Exercício: 003 da Aula 5 - Matrizes                                         *
* Instituição de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: José Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descrição: Considere a matriz no formato abaixo, com cada posição com o     *
* número indicado na matriz:                                                  *
*     0    1    2                                                             *
*     3    4    5                                                             *
*     6    7    8                                                             *
* Calcule e retorne a soma de todos os elementos da matriz.                   *
******************************************************************************/



#include <stdio.h>
#include <locale.h>

void imprimir_matriz(int matriz[][3], int linhas, int colunas){
    printf("Matriz normal:");
    for(int i = 0; i <linhas; i++){
        printf("\n{");
        for(int j = 0; j < colunas; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("}");
    }
}

int somar_elementos(int matriz[][3], int linhas, int colunas){
    int sum = 0;

    for(int i = 0; i <linhas; i++){
        for(int j = 0; j < colunas; j++){
            sum += matriz[i][j];
        }
    }
    return sum;
}

int main(void){
    int soma = 0;

    int matriz[3][3]={
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
    };

    imprimir_matriz(matriz, 3, 3);

    soma = somar_elementos(matriz, 3, 3);

    printf("\n\nTotal da soma de todos os elementos da Matriz: %d", soma);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
