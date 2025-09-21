/**********************************************************************************
* Data: 21/09/2025                                                                *
* Exercício: 008 da Aula 3 - Operadores e Controle de Fluxo                       *
* Instituição de Ensino: UNEB                                                     *
* Disciplina: Linguagem C                                                         *
* Professor: José Grimaldo                                                        *
* Aluno: D. K. Mariano                                                            *
* Descrição: Escreva um algoritmo em C que leia uma série de números inteiros     *
* (a entrada termina quando o número 0 é digitado) e exiba a soma desses números. *
**********************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int contador = 1;
    int num = 0;
    int soma = 0;

    do {
            printf("\nDigite o %dº número inteiro(ou 0 para parar): ", contador);
            scanf("%d", &num);
            soma += num;
            if (num !=0){
                contador++;
            }
    }while (num != 0);

    printf("\n\nVocê digitou %d número(s).", contador);
    printf("\nA soma de todos os números digitados é %d", soma);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

