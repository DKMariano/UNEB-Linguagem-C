/*******************************************************************************************
* Data: 21/09/2025                                                                         *
* Exercício: 010 da Aula 3 - Operadores e Controle de Fluxo                                *
* Instituição de Ensino: UNEB                                                              *
* Disciplina: Linguagem C                                                                  *
* Professor: José Grimaldo                                                                 *
* Aluno: D. K. Mariano                                                                     *
* Descrição: Faça um programa em C que leia uma sequência de números inteiros (a sequência *
* termina quando o usuário digitar um número negativo) e exiba o maior número digitado.    *
*******************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    int maior = 0;

    do{
        printf("\nDigite números inteiros (para encerrar, digite um número negativo):");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
    }while (num >= 0);

    printf("\n\nVocê encerrou a sequência ao digitar um número negativo!");


    printf("\nO maior número da sequência digitada foi %d!", maior);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

