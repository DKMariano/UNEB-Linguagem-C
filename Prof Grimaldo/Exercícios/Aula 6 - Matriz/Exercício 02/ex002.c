/***************************************************************************
* Data: 20/09/2025                                                         *
* Exercício: 002 da Aula 5 - Matrizes                                      *
* Instituição de Ensino: UNEB                                              *
* Disciplina: Linguagem C                                                  *
* Professor: José Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descrição: Considere a matriz no formato abaixo, com cada posição com o  *
* número indicado na matriz:                                               *
*     0    1    2                                                          *
*     3    4    5                                                          *
*     6    7    8                                                          *
* Percorra uma matriz de modo que a ordem dos valores impressos, na matriz *
* acima, seja: 0, 3, 6, 1, 4, 7, 2, 5, 8                                   *
***************************************************************************/

#include <stdio.h>
#include <locale.h>

/**
 * Função: imprimir_matriz_alterada
 * --------------------------------
 * Percorre a matriz no sentido das colunas, imprimindo os elementos de cima
 * para baixo e da esquerda para a direita.
 *
 * Essa ordem de varredura resulta na seguinte saída para uma matriz 3x3:
 * { 0, 3, 6, 1, 4, 7, 2, 5, 8 }
 *
 * matriz: matriz de inteiros a ser percorrida.
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 *
 * Observação:
 * - O último elemento é tratado separadamente para não incluir vírgula após ele.
 */
void imprimir_matriz_alterada(int matriz[][3], int colunas, int linhas){
    printf("\nSaída solicitada: { ");
    for(int i = 0; i <linhas; i++){
        for(int j = 0; j <colunas; j++){
            if(i == 2 && j ==2){
                printf("%d", matriz[j][i]);
            }else{
                printf("%d,  ", matriz[j][i]);
            }
        }
    }
    printf("}\n");
}

/**
 * Função: imprimir_matriz
 * -----------------------
 * Exibe uma matriz no formato tradicional (linhas x colunas).
 *
 * matriz: matriz de inteiros a ser impressa.
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 *
 * Exemplo de saída (para 3x3):
 * { 0 1 2 }
 * { 3 4 5 }
 * { 6 7 8 }
 */
void imprimir_matriz(int matriz[][3], int colunas, int linhas){
    printf("\nMatriz normal: \n");
    for(int i = 0; i <3; i++){
        printf("{ ");
        for(int j = 0; j <3; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("}\n");
    }
}

/**
 * Função: main
 * ------------
 * Função principal do programa.
 *
 * - Define a matriz 3x3 com valores de 0 a 8.
 * - Chama a função para imprimir a matriz no formato normal.
 * - Chama a função para imprimir a matriz na ordem solicitada.
 * - Aguarda o usuário pressionar Enter antes de encerrar.
 */
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
    };

    imprimir_matriz(matriz, 3, 3);
    imprimir_matriz_alterada(matriz, 3, 3);


    printf("\n\nPressione Enter para sair...");
    getchar();

}
