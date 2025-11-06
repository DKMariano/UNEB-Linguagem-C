/***********************************************************************************
* Data: 04/11/2025                                                                 *
* Exercício: 005 – Aula 9: String                                                  *
* Instituição de Ensino: UNEB                                                      *
* Disciplina: Linguagem de Programação em C                                        *
* Professor: José Grimaldo                                                         *
* Aluno: D. K. Mariano                                                             *
* Descrição: Implemente uma função void split_string() que divida uma string em    *
* duas partes, utilizando um caractere delimitador. A função deve armazenar a      *
* parte anterior ao delimitador em first_part e a parte posterior em second_part.  *
* Utilize ponteiros para ponteiros (char **) para armazenar as partes separadas da *
* string.                                                                          *
* Protótipo da função:                                                             *
* void split_string(char *str, const char delimitador,                             *
*                   char **first_part, char **second_part);                        *
* Exemplo de uso:                                                                  *
* char str[] = "Hello,World";                                                      *
* char *first = NULL;                                                              *
* char *second = NULL;                                                             *
* split_string(str, ',', &first, &second);                                         *
* // Após a execução:                                                              *
* // first  deve apontar para "Hello"                                              *
* // second deve apontar para "World"                                              *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *primeira_parte;
    char *segunda_parte;
} DivisaoResultado;

DivisaoResultado dividir_string(char *str, const char delimitador){
    DivisaoResultado resultado = {NULL, NULL};

    resultado.primeira_parte = (char *)malloc(strlen(char) * delimitador);


    int tamStr = strlen(str);



    return resultado;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str[] = "Olá, mundo!";


    DivisaoResultado resultado = dividir_string(str, 4);


    printf("str: %s \n", str);
    printf("primeira parte: %s \n", resultado.primeira_parte);
    printf("segunda parte: %s \n", resultado.segunda_parte);


    return 0;
}
