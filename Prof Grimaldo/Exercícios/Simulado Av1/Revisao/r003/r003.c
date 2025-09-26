/********************************************************************************
* Data: 25/09/2025                                                         	    *
* Exercício: 002 Treino Av1		 				                                *
* Instituição de Ensino: UNEB                                              	    *
* Disciplina: Linguagem C                                              		    *
* Professor: José Grimaldo                                                 	    *
* Aluno: D. K. Mariano                                                    	    *
* Descrição: Escreva uma função em C que receba uma matriz 3×3 e retorne a soma *
* da diagonal principal.							                            *
* Exemplo de entrada:								                            *
*   1 0 2									                                    *
*   3 4 5									                                    *
*   6 7 8									                                    *
* Saída:									                                    *
*   13										                                    *
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

