/*********************************************************************************
* Data: 06/11/2025                                                               *
* Exercício: 007 – Aula 9: String                                                *
* Instituição de Ensino: UNEB                                                    *
* Disciplina: Linguagem de Programação em C                                      *
* Professor: José Grimaldo                                                       *
* Aluno: D. K. Mariano                                                           *
* Descrição: Verifique se uma string é palíndroma considerando apenas caracteres *
* alfanuméricos e ignorando maiúsculas/minúsculas.                               *
* Regras: Considere somente ASCII (0-255)                                        *
*     - Ignore caracteres não alfanuméricos.                                     *
*     - Não copie a string; utilize dois ponteiros.                              *
* Objetivo: retornar true se s for palíndroma sob as regras acima                *
*********************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(const char *str){
    int tam = strlen(str);

    const char *ptr1 = str;

    const char *ptr2 = str + strlen(str) - 1;

    while(ptr1 <= ptr2){
        if(*ptr1 != *ptr2){
            return false;
        }
        ptr1++;
        ptr2--;
    }

    return true;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str[] = "ama";

    int retorno = palindromo(str);

    if(retorno == 0){
        printf("%s nao palíndroma\n", str);

    } else{
        printf("%s palíndroma\n", str);
    }

    return 0;
}
