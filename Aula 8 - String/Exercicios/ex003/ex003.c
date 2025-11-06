/**************************************************************************
* Data: 02/11/2025                                                        *
* Exercício: 003 – Aula 9: String                                         *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Crie uma função char* meuStrcpy(char *dest, const char *src) *
* que copia a string src para dest sem usar a função padrão strcpy.       *
**************************************************************************/

#include <stdio.h>
#include <locale.h>

char* meuStrcpy(char *dest, const char *src){
    char *inicioB = dest;

    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    };

    *dest = '\0';

    return inicioB;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char strA[30] = "Eu tirei 10 na AV2 de LP I!";

    char strB[30];

    meuStrcpy(strB, strA);

    printf("strA: %s \n", strA);
    printf("strB: %s \n", strB);

    return 0;
}
