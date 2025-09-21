/**********************************************************************************
* Data: 21/09/2025                                                                *
* Exerc�cio: 008 da Aula 3 - Operadores e Controle de Fluxo                       *
* Institui��o de Ensino: UNEB                                                     *
* Disciplina: Linguagem C                                                         *
* Professor: Jos� Grimaldo                                                        *
* Aluno: D. K. Mariano                                                            *
* Descri��o: Escreva um algoritmo em C que leia uma s�rie de n�meros inteiros     *
* (a entrada termina quando o n�mero 0 � digitado) e exiba a soma desses n�meros. *
**********************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int contador = 1;
    int num = 0;
    int soma = 0;

    do {
            printf("\nDigite o %d� n�mero inteiro(ou 0 para parar): ", contador);
            scanf("%d", &num);
            soma += num;
            if (num !=0){
                contador++;
            }
    }while (num != 0);

    printf("\n\nVoc� digitou %d n�mero(s).", contador);
    printf("\nA soma de todos os n�meros digitados � %d", soma);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

