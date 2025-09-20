/***********************************************************************
* Data: 20/09/2025                                                     *
* Exercício: 002 da Aula 3 - Operadores e Controle de Fluxo            *
* Instituição de Ensino: UNEB                                          *
* Disciplina: Linguagem C                                              *
* Professor: José Grimaldo                                             *
* Aluno: D. K. Mariano                                                 *
* Descrição: Fazer um programa em C que imprime a tabuada de um número *
* lido do terminal                                                     *
***********************************************************************/

#include <stdio.h>
#include <locale.h>


void imprimir_tabuada(int numero){
    int contador = 0;
    printf("\n=== TABUADA DE %d ===", numero);
    while (contador <= 10){
        printf("\n   %d x %d = %d", numero, contador, numero * contador);
        contador ++;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int num = 0;

    printf("\n\nDigite o número que deseja calcular a tabuada: ");
    scanf("%d", &num);

    imprimir_tabuada(num);

    printf("\n\nPressione Enter para sair...");
    getchar();

}
