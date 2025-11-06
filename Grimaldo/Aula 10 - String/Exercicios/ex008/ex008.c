/*************************************************************************************
* Data: 06/11/2025                                                                   *
* Exercício: 006 – Aula 9: String                                                    *
* Instituição de Ensino: UNEB                                                        *
* Disciplina: Linguagem de Programação em C                                          *
* Professor: José Grimaldo                                                           *
* Aluno: D. K. Mariano                                                               *
* Descrição: Dado que strings contêm apenas caracteres ASCII (0–255),determine se    *
* duas strings são anagramas (mesmo multiconjunto de caracteres, ordem irrelevante). *
* Premissas/Regras:                                                                  *
*   - Comparação sensível a maiúsculas/minúsculas por padrão.                        *
*   - Espaços e pontuação contam como caracteres normais.                            *
*   - Não use alocação dinâmica desnecessária.                                       *
* Objetivo:                                                                          *
*   - retornar true se str1 e str2 forem anagramas                                   *
*************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palindromo(const char *str){
    int tam = strlen(str);
    const char *ptr1 = str;

    const char *ptr2 = str + strlen(str) - 1;

    int contador = 0;

    for(int i = 0; i <= tam/2; i++){
        if(*ptr1 == *ptr2){
            contador++;
        }
        ptr1++;
        ptr2--;
    }

    if(contador == tam - 1){
        return true;
    }

    return 0;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str[] = "ama";

    int retorno = palindromo(str);

    if(retorno == 0){
        printf("%s não é palíndroma\n", str);

    } else{
        printf("%s é palíndroma\n", str);
    }

    return 0;
}
