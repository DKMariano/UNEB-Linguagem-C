/***************************************************************************************
* Data: 05/11/2025                                                                     *
* Exercício: 006 – Aula 9: String                                                      *
* Instituição de Ensino: UNEB                                                          *
* Disciplina: Linguagem de Programação em C                                            *
* Professor: José Grimaldo                                                             *
* Aluno: D. K. Mariano                                                                 *
* Descrição: Implemente uma função int is_rotation(const char *str1, const char *str2) *
* que verifica se str2 é uma rotação de str1. Use as funções strlen, strcat e strstr   *
* da biblioteca string.h.                                                              *
***************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void desloca_direita(char *str1){
    int tam = strlen(str1);

    char ultimo = str1[0];

    for(int i = tam -1; i >0; i--){
        str1[i] =  str1[i - 1];
    }

    str1[0] = ultimo;

}



int is_rotation(char *str1, char *str2) {
    int tam1 = strlen(str1);

    int tam2 = strlen(str2);

    if (tam1 != tam2){
        return false;
    }

    for(int i = 0; i < tam1; i++){
        if(strcmp(str1,str2)){
            return true;
        }
        desloca_direita(str1);
    }
    return false;
}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str1[] = "STRAB";

    char str2[] = "BSTRA";

    int retorno = is_rotation(str1, str2);

    if(retorno == false){
        printf("%s não é rotação de %s \n", str2, str1);

    } else{
        printf("%s é rotação de %s \n", str2, str1);
    }

    return 0;
}
