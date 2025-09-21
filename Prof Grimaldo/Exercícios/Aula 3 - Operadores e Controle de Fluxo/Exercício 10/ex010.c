/*******************************************************************************************
* Data: 21/09/2025                                                                         *
* Exerc�cio: 010 da Aula 3 - Operadores e Controle de Fluxo                                *
* Institui��o de Ensino: UNEB                                                              *
* Disciplina: Linguagem C                                                                  *
* Professor: Jos� Grimaldo                                                                 *
* Aluno: D. K. Mariano                                                                     *
* Descri��o: Fa�a um programa em C que leia uma sequ�ncia de n�meros inteiros (a sequ�ncia *
* termina quando o usu�rio digitar um n�mero negativo) e exiba o maior n�mero digitado.    *
*******************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    int maior = 0;

    do{
        printf("\nDigite n�meros inteiros (para encerrar, digite um n�mero negativo):");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
    }while (num >= 0);

    printf("\n\nVoc� encerrou a sequ�ncia ao digitar um n�mero negativo!");


    printf("\nO maior n�mero da sequ�ncia digitada foi %d!", maior);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

