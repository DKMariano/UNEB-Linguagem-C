/**************************************************************************************
* Data: 21/09/2025                                                                    *
* Exerc�cio: 009 da Aula 3 - Operadores e Controle de Fluxo                           *
* Institui��o de Ensino: UNEB                                                         *
* Disciplina: Linguagem C                                                             *
* Professor: Jos� Grimaldo                                                            *
* Aluno: D. K. Mariano                                                                *
* Descri��o: Crie um programa em C que leia uma temperatura em graus Celsius e a      *
* converta para Fahrenheit. O programa deve exibir a mensagem "Frio" se a temperatura *
* em Fahrenheit for menor que 50, e "Quente" se for maior ou igual a 50.              *
**************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    float celsius = 0;
    float fahrenheit = 0;

    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("\n%.2f�C � igual a %.2f�F.\n", celsius, fahrenheit);

    if(fahrenheit < 50){
        printf("\nFrio!");
    }else{
        printf("\nQuente!");
    }

    printf("\n\nPressione Enter para sair...");
    getchar();

}

