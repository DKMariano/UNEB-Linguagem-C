/***************************************************************************
* Data: 20/09/2025                                                         *
* Exerc�cio: 002 da Aula 5 - Matrizes                                      *
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
* acima, seja: 0, 3, 6, 1, 4, 7, 2, 5, 8                                   *
***************************************************************************/

#include <stdio.h>
#include <locale.h>

/**
 * Fun��o: imprimir_matriz_alterada
 * --------------------------------
 * Percorre a matriz no sentido das colunas, imprimindo os elementos de cima
 * para baixo e da esquerda para a direita.
 *
 * Essa ordem de varredura resulta na seguinte sa�da para uma matriz 3x3:
 * { 0, 3, 6, 1, 4, 7, 2, 5, 8 }
 *
 * matriz: matriz de inteiros a ser percorrida.
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
 *
 * Observa��o:
 * - O �ltimo elemento � tratado separadamente para n�o incluir v�rgula ap�s ele.
 */
void imprimir_matriz_alterada(int matriz[][3], int colunas, int linhas){
    printf("\nSa�da solicitada: { ");
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
 * Fun��o: imprimir_matriz
 * -----------------------
 * Exibe uma matriz no formato tradicional (linhas x colunas).
 *
 * matriz: matriz de inteiros a ser impressa.
 * linhas: n�mero de linhas da matriz.
 * colunas: n�mero de colunas da matriz.
 *
 * Exemplo de sa�da (para 3x3):
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
 * Fun��o: main
 * ------------
 * Fun��o principal do programa.
 *
 * - Define a matriz 3x3 com valores de 0 a 8.
 * - Chama a fun��o para imprimir a matriz no formato normal.
 * - Chama a fun��o para imprimir a matriz na ordem solicitada.
 * - Aguarda o usu�rio pressionar Enter antes de encerrar.
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
