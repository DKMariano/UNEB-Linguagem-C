/***************************************************************************
* Data: 20/09/2025                                                         *
* Exercício: 001 da Aula 5 - Matrizes                                      *
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
* acima, seja: 0, 1, 2, 3, 4, 5, 6, 7, 8                                   *
***************************************************************************/


#include <stdio.h>
#include <locale.h>

/**
 * Função: imprimir_matriz_alterada
 * --------------------------------
 * Percorre a matriz em ordem linha por linha (varredura "normal"),
 * exibindo todos os elementos em sequência linear (um após o outro).
 *
 * Exemplo de saída para a matriz 3x3:
 * { 0, 1, 2, 3, 4, 5, 6, 7, 8 }
 *
 * matriz: matriz bidimensional (3x3 neste caso).
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 *
 * Observação:
 * - O último elemento não recebe vírgula após ele.
 */
void imprimir_matriz_alterada(int matriz[3][3],int linhas,int colunas){
    printf("\n\nSaída desejada: {");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == linhas - 1 && j == colunas -1){
                printf("%d ", matriz[i][j]);
            }else{
                printf("%d, ", matriz[i][j]);
            }
        }
    }
    printf("}\n");
}

/**
 * Função: imprimir_matriz
 * -----------------------
 * Exibe a matriz no formato "normal", ou seja, em linhas e colunas,
 * como se fosse uma tabela.
 *
 * Exemplo de saída para a matriz 3x3:
 * Matriz normal:
 * {  0   1   2 }
 * {  3   4   5 }
 * {  6   7   8 }
 *
 * matriz: matriz bidimensional (3x3 neste caso).
 * linhas: número de linhas da matriz.
 * colunas: número de colunas da matriz.
 */
void imprimir_matriz(int matriz[3][3],int linhas,int colunas){
    printf("Matriz normal: ");
    for(int i = 0; i < linhas; i++){
        printf("\n{");
        for(int j = 0; j < colunas; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("}");
    }

}

/**
 * Função: main
 * ------------
 * Ponto de entrada do programa.
 *
 * - Define uma matriz 3x3 preenchida com valores de 0 a 8.
 * - Imprime a matriz no formato de tabela (função imprimir_matriz).
 * - Imprime a matriz em formato linear, conforme solicitado no exercício
 *   (função imprimir_matriz_alterada).
 * - Aguarda o usuário pressionar Enter antes de encerrar o programa.
 *
 * Retorno:
 * - Retorna 0 indicando que o programa foi executado com sucesso.
 */
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    imprimir_matriz(matriz, 3, 3);

    imprimir_matriz_alterada(matriz, 3, 3);


    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
