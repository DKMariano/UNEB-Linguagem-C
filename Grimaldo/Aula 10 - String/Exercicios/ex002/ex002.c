/***********************************************************************
* Data: 02/11/2025                                                     *
* Exercício: 002 – Aula 9: String                                      *
* Instituição de Ensino: UNEB                                          *
* Disciplina: Linguagem de Programação em C                            *
* Professor: José Grimaldo                                             *
* Aluno: D. K. Mariano                                                 *
* Descrição: Escreva uma função size_t meuStrlen(const char *str) que  *
* retorna o comprimento de uma string sem usar a função padrão strlen. *
***********************************************************************/

#include <stdio.h>
#include <locale.h>

size_t meuStrlen(const char *str){
    int contador = 0;

    while(*str != '\0'){
        contador++;
        str++;
    }


    return contador;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char texto[] = "texto2";

    char *ptr = &texto[0];

    size_t tamanho = meuStrlen(ptr);//size_t é um unsigned

    printf("String texto: %s \n", texto);
    printf("Tamanho da string  texto: %zu \n", tamanho); // especificador unsigned = %zu

    return 0;
}
