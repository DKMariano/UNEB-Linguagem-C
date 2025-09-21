/***********************************************************************************************
* Data: 21/09/2025                                                                             *
* Exercício: Desafio da Aula 3 - Operadores e Controle de Fluxo                                *
* Instituição de Ensino: UNEB                                                                  *
* Disciplina: Linguagem C                                                                      *
* Professor: José Grimaldo                                                                     *
* Aluno: D. K. Mariano                                                                         *
* Descrição: Faça um programa que mostre o apenas o n-ésimo termo da série de Fibonacci.       *
* Esse programa deve receber como entrada um número inteiro n maior que 2 (considere que 0 e 1 *
* são conhecidos, sendo eles os 2 primeiros números da série).                                 *
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
        printf("\nDigite o termo da série de Fibonacci que deseja imprimir na tela: ");
        scanf("%d", &termo);

        if(termo <= 2){
            printf("\nErro! Digite um número válido!");
        }
    }while (termo <= 2);

    for(int i = 2; i <= termo; i++){
        fibonacci = antecessor + sucessor;
        antecessor = sucessor;
        sucessor = fibonacci;
    }

    printf("\n\nO %dº termo da série de Fibonacci é %d !", termo, fibonacci);

    printf("\n\nPressione Enter para sair...");
    getchar();

}

