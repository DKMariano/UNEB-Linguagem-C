/***************************************************************************
* Data: 21/09/2025                                                         *
* Exerc�cio: 004 da Aula 5 - Matrizes                                      *
* Institui��o de Ensino: UNEB                                              *
* Disciplina: Linguagem C                                                  *
* Professor: Jos� Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descri��o: Fa�a um algoritmo em C que leia um n�mero inteiro e determine *
* se ele � par ou �mpar.                                                   *
***************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;

    printf("Digite um n�mero inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nO n�mero %d � PAR!", num);
    } else{
        printf("\nO n�mero %d � �MPAR!", num);
    }


    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
