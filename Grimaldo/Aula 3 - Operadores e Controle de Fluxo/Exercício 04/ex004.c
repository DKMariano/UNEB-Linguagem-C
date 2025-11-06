/***************************************************************************
* Data: 21/09/2025                                                         *
* Exercício: 004 da Aula 5 - Matrizes                                      *
* Instituição de Ensino: UNEB                                              *
* Disciplina: Linguagem C                                                  *
* Professor: José Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descrição: Faça um algoritmo em C que leia um número inteiro e determine *
* se ele é par ou ímpar.                                                   *
***************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nO número %d é PAR!", num);
    } else{
        printf("\nO número %d é ÍMPAR!", num);
    }


    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
