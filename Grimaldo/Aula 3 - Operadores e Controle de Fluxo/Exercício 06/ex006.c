/************************************************************************
* Data: 21/09/2025                                                      *
* Exercício: 006 da Aula 5 - Matrizes                                   *
* Instituição de Ensino: UNEB                                           *
* Disciplina: Linguagem C                                               *
* Professor: José Grimaldo                                              *
* Aluno: D. K. Mariano                                                  *
* Descrição: Escreva um programa em C que leia dois números inteiros e  *
* exiba o maior deles. Caso sejam iguais, exiba uma mensagem informando *
* que os números são iguais.                                            *
************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num1 = 0;
    int num2 = 0;

    printf("\nDigite um número inteiro qualquer: ");
    scanf("%d", &num1);

    printf("\nDigite um outro número inteiro qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\nO número %d é maior que o número %d.", num1, num2);
    } else if(num1 < num2){
        printf("\nO número %d é maior que o número %d.", num2, num1);
    } else{
        printf("\nO número %d é igual ao número %d.", num1, num2);
    }

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
