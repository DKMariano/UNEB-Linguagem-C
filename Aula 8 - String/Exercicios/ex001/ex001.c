/***************************************************************************
* Data: 02/11/2025                                                         *
* Exercício: 001 – Aula 9: String                                          *
* Instituição de Ensino: UNEB                                              *
* Disciplina: Linguagem de Programação em C                                *
* Professor: José Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descrição: Escreva uma função void converteParaMaiusculas(char *str) que *
* altera todas as letras minúsculas de uma string para maiúsculas. Teste   *
* com a string char texto[] = "Programação";                               *
***************************************************************************/

#include <stdio.h>
#include <locale.h>



void converteParaMaiusculas(char *str){
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        str++;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");


    char texto[] = "Programação";

    char *ptr = &texto[0];

    printf("Texto original: ");
    puts(texto);

    converteParaMaiusculas(ptr);

    printf("Texto convertido: ");
    puts(texto);

    return 0;
}
