/***********************************************************************
* Data: 20/09/2025                                                     *
* Exerc�cio: 002 da Aula 3 - Operadores e Controle de Fluxo            *
* Institui��o de Ensino: UNEB                                          *
* Disciplina: Linguagem C                                              *
* Professor: Jos� Grimaldo                                             *
* Aluno: D. K. Mariano                                                 *
* Descri��o: Fazer um programa em C que imprime a tabuada de um n�mero *
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

    printf("\n\nDigite o n�mero que deseja calcular a tabuada: ");
    scanf("%d", &num);

    imprimir_tabuada(num);

    printf("\n\nPressione Enter para sair...");
    getchar();

}
