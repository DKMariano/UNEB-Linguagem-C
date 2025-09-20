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
* Percorra uma matriz linhas em zigue-zague: linhas de índice par (0, 2, ...) *
* da esquerda para a direita; linhas de índice ímpar (1, 3, ...) da direita   *
* para a esquerda. Ordem na matriz de exemplo seria 0, 1, 2, 5, 4, 3, 6, 7, 8 *
******************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <locale.h>

/**
 * Função: imprimir_matriz
 * -----------------------
 * Exibe a matriz no formato tradicional (em linhas e colunas).
 *
 * Exemplo de saída para a matriz 3x3:
 * Matriz normal:
 * {  0  1  2 }
 * {  3  4  5 }
 * {  6  7  8 }
 *
 * matriz: matriz bidimensional a ser impressa.
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 */
void imprimir_matriz(int matriz[][3], int linhas, int colunas){

    printf("Matriz normal: \n");
    for (int i = 0; i <linhas; i++){
        printf("{");
        for(int j = 0; j < colunas; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("} \n");
    }
}

/**
 * Função: imprimir_matriz_zig_zag
 * -------------------------------
 * Percorre a matriz em ordem "zigue-zague":
 * - Linhas com índice par (0, 2, ...) são percorridas da esquerda para a direita.
 * - Linhas com índice ímpar (1, 3, ...) são percorridas da direita para a esquerda.
 *
 * Isso cria o efeito de leitura em zigue-zague.
 *
 * Exemplo de saída para a matriz 3x3:
 * { 0  1  2  5  4  3  6  7  8 }
 *
 * matriz: matriz bidimensional a ser percorrida.
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 */
void imprimir_matriz_zig_zag(int matriz[][3], int linhas, int colunas){
    printf("\n Saída esperada: {");
    for(int i = 0; i < linhas; i++){
        if(i % 2 == 0){
            for(int j = 0; j < colunas; j++){
                printf("  %d  ", matriz[i][j]);
            }
        }else{
            for(int j = colunas - 1; j >= 0; j--){
                printf("  %d  ", matriz[i][j]);
            }
        }
    }
    printf("}\n");
}

/**
 * Função: main
 * ------------
 * Função principal do programa.
 *
 * - Define uma matriz 3x3 com valores de 0 a 8.
 * - Imprime a matriz no formato normal (linhas x colunas).
 * - Imprime a matriz no formato zigue-zague, conforme solicitado.
 * - Aguarda o usuário pressionar Enter antes de encerrar.
 *
 * Retorno:
 * - Retorna 0 indicando execução bem-sucedida.
 */
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
    };

    imprimir_matriz(matriz, 3, 3);

    imprimir_matriz_zig_zag(matriz, 3, 3);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
