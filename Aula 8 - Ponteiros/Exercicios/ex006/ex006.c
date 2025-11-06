/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 006 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Dado um array de caracteres char mensagem[] = "Olá";, use um *
* ponteiro para imprimir cada caractere da string..                       *
**************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    char mensagem[] = "Olá";

    char *ptr = &mensagem[0];

    printf("Mensagem escrita letra por letra: \n");

    int letra = 1;

    while(*ptr != '\0' ){

        printf("%d° letra da mensagem: %c \n", letra , *ptr);
        letra++;
        ptr++;
    }

    return 0;
}
