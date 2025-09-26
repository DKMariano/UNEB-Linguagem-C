/*********************************************************************************
* Data: 25/09/2025                                                         	     *
* Exercício: 001 Treino Av1		 					                             *
* Instituição de Ensino: UNEB                                              	     *
* Disciplina: Linguagem C                                              		     *
* Professor: José Grimaldo                                                 	     *
* Aluno: D. K. Mariano                                                    	     *
* Descrição: Implemente uma função em C que receba uma matriz quadrada n x n e   *
* retorne a soma dos elementos da diagonal secundária (do canto superior direito *
* até o canto inferior esquerdo).						                         *
* Protótipo sugerido: int soma_diagonal_secundaria(int m[][N], int n);		     *
* Entrada:									                                     *
*    1 2 3									                                     *
*    4 5 6									                                     *
*    7 8 9									                                     *
* Saída: 									                                     *
*    15 (3 + 5 + 7).                                  				             *
*********************************************************************************/

#include <stdio.h>

int soma_pares(int m[3][3], int linhas, int colunas){
    int soma = 0;

    for(int i = 0; i < linhas; i ++){
        for(int j = 0; j < colunas; j++){
            if(m[i][j] % 2 == 0){
                soma += m[i][j];
            }
        }
    }

    return soma;
}

// Função principal
int main(void)
{
    int s = 0;
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    s = soma_pares(matriz, 3, 3);

    printf("%d", s);

    return 0;

}
