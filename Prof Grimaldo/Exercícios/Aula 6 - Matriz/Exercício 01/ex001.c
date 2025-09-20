/***************************************************************************
* Data: 20/09/2025                                                         *
* Exerc�cio: 001 da Aula 5 - Matrizes                                      *
* Institui��o de Ensino: UNEB                                              *
* Disciplina: Linguagem C                                                  *
* Professor: Jos� Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descri��o: Considere a matriz no formato abaixo, com cada posi��o com o  *
* n�mero indicado na matriz:                                               *
*     0    1    2                                                          *
*     3    4    5                                                          *
*     6    7    8                                                          *
* Percorra uma matriz de modo que a ordem dos valores impressos, na matriz *
* acima, seja: 0, 1, 2, 3, 4, 5, 6, 7, 8                                   *
***************************************************************************/


#include <stdio.h>
#include <locale.h>

/**
 * Fun��o: imprimir_matriz_alterada
 * --------------------------------
 * Percorre a matriz em ordem linha por linha (varredura "normal"),
 * exibindo todos os elementos em sequ�ncia linear (um ap�s o outro).
 *
 * Exemplo de sa�da para a matriz 3x3:
 * { 0, 1, 2, 3, 4, 5, 6, 7, 8 }
 *
 * matriz: matriz bidimensional (3x3 neste caso).
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
 *
 * Observa��o:
 * - O �ltimo elemento n�o recebe v�rgula ap�s ele.
 */
void imprimir_matriz_alterada(int matriz[3][3],int linhas,int colunas){
    printf("\n\nSa�da desejada: {");
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
 * Fun��o: imprimir_matriz
 * -----------------------
 * Exibe a matriz no formato "normal", ou seja, em linhas e colunas,
 * como se fosse uma tabela.
 *
 * Exemplo de sa�da para a matriz 3x3:
 * Matriz normal:
 * {  0   1   2 }
 * {  3   4   5 }
 * {  6   7   8 }
 *
 * matriz: matriz bidimensional (3x3 neste caso).
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
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
 * Fun��o: main
 * ------------
 * Ponto de entrada do programa.
 *
 * - Define uma matriz 3x3 preenchida com valores de 0 a 8.
 * - Imprime a matriz no formato de tabela (fun��o imprimir_matriz).
 * - Imprime a matriz em formato linear, conforme solicitado no exerc�cio
 *   (fun��o imprimir_matriz_alterada).
 * - Aguarda o usu�rio pressionar Enter antes de encerrar o programa.
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
