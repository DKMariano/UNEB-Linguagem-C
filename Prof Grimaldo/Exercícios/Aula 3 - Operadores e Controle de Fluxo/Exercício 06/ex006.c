/************************************************************************
* Data: 21/09/2025                                                      *
* Exerc�cio: 006 da Aula 5 - Matrizes                                   *
* Institui��o de Ensino: UNEB                                           *
* Disciplina: Linguagem C                                               *
* Professor: Jos� Grimaldo                                              *
* Aluno: D. K. Mariano                                                  *
* Descri��o: Escreva um programa em C que leia dois n�meros inteiros e  *
* exiba o maior deles. Caso sejam iguais, exiba uma mensagem informando *
* que os n�meros s�o iguais.                                            *
************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num1 = 0;
    int num2 = 0;

    printf("\nDigite um n�mero inteiro qualquer: ");
    scanf("%d", &num1);

    printf("\nDigite um outro n�mero inteiro qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\nO n�mero %d � maior que o n�mero %d.", num1, num2);
    } else if(num1 < num2){
        printf("\nO n�mero %d � maior que o n�mero %d.", num2, num1);
    } else{
        printf("\nO n�mero %d � igual ao n�mero %d.", num1, num2);
    }

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
