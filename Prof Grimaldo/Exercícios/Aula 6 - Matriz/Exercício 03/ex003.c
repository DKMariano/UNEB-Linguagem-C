/******************************************************************************
* Data: 20/09/2025                                                            *
* Exerc�cio: 003 da Aula 5 - Matrizes                                         *
* Institui��o de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: Jos� Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descri��o: Considere a matriz no formato abaixo, com cada posi��o com o     *
* n�mero indicado na matriz:                                                  *
*     0    1    2                                                             *
*     3    4    5                                                             *
*     6    7    8                                                             *
* Percorra uma matriz linhas em zigue-zague: linhas de �ndice par (0, 2, ...) *
* da esquerda para a direita; linhas de �ndice �mpar (1, 3, ...) da direita   *
* para a esquerda. Ordem na matriz de exemplo seria 0, 1, 2, 5, 4, 3, 6, 7, 8 *
******************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <locale.h>

/**
 * Fun��o: imprimir_matriz
 * -----------------------
 * Exibe a matriz no formato tradicional (em linhas e colunas).
 *
 * Exemplo de sa�da para a matriz 3x3:
 * Matriz normal:
 * {  0  1  2 }
 * {  3  4  5 }
 * {  6  7  8 }
 *
 * matriz: matriz bidimensional a ser impressa.
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
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
 * Fun��o: imprimir_matriz_zig_zag
 * -------------------------------
 * Percorre a matriz em ordem "zigue-zague":
 * - Linhas com �ndice par (0, 2, ...) s�o percorridas da esquerda para a direita.
 * - Linhas com �ndice �mpar (1, 3, ...) s�o percorridas da direita para a esquerda.
 *
 * Isso cria o efeito de leitura em zigue-zague.
 *
 * Exemplo de sa�da para a matriz 3x3:
 * { 0  1  2  5  4  3  6  7  8 }
 *
 * matriz: matriz bidimensional a ser percorrida.
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
 */
void imprimir_matriz_zig_zag(int matriz[][3], int linhas, int colunas){
    printf("\n Sa�da esperada: {");
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
 * Fun��o: main
 * ------------
 * Fun��o principal do programa.
 *
 * - Define uma matriz 3x3 com valores de 0 a 8.
 * - Imprime a matriz no formato normal (linhas x colunas).
 * - Imprime a matriz no formato zigue-zague, conforme solicitado.
 * - Aguarda o usu�rio pressionar Enter antes de encerrar.
 *
 * Retorno:
 * - Retorna 0 indicando execu��o bem-sucedida.
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
