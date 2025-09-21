/***********************************************************************************************
* Data: 21/09/2025                                                                             *
* Exerc�cio: Desafio da Aula 3 - Operadores e Controle de Fluxo                                *
* Institui��o de Ensino: UNEB                                                                  *
* Disciplina: Linguagem C                                                                      *
* Professor: Jos� Grimaldo                                                                     *
* Aluno: D. K. Mariano                                                                         *
* Descri��o: Fa�a um programa que mostre o apenas o n-�simo termo da s�rie de Fibonacci.       *
* Esse programa deve receber como entrada um n�mero inteiro n maior que 2 (considere que 0 e 1 *
* s�o conhecidos, sendo eles os 2 primeiros n�meros da s�rie).                                 *
***********************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int termo = 0;
    int fibonacci = 0;
    int antecessor = 0;
    int sucessor = 1;

    do{
        printf("\nDigite o termo da s�rie de Fibonacci que deseja imprimir na tela: ");
        scanf("%d", &termo);

        if(termo <= 2){
            printf("\nErro! Digite um n�mero v�lido!");
        }
    }while (termo <= 2);

    for(int i = 2; i <= termo; i++){
        fibonacci = antecessor + sucessor;
        antecessor = sucessor;
        sucessor = fibonacci;
    }

    printf("\n\nO %d� termo da s�rie de Fibonacci � %d !", termo, fibonacci);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

