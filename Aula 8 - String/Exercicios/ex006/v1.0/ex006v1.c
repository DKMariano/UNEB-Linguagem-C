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

int is_rotation(const char *str1, const char *str2) {
    int tam1 = strlen(str1);

    int tam2 = strlen(str2);

    if(tam1 != tam2){
        return 0;
    }

    char *str3 = (char*) malloc(sizeof(char)* (tam1 + tam1 + 1));

    if(str3 == NULL){
        printf("Erro na alocação dinâmica");
        return 0;
    }

    strcpy(str3, str1);

    strcat(str3, str1);

    const char *ok = strstr(str3, str2);

    if(ok != NULL){
        return 1;
    }

    return 0;

}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str1[] = "STRAB";

    char str2[] = "BSTRA";

    int retorno = is_rotation(str1, str2);

    if(retorno == 0){
        printf("%s não é rotação de %s \n", str2, str1);

    } else{
        printf("%s é rotação de %s \n", str2, str1);
    }

    return 0;
}
