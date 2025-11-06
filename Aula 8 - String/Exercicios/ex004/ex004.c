/***************************************************************************
* Data: 04/11/2025                                                         *
* Exercício: 003 – Aula 9: String                                          *
* Instituição de Ensino: UNEB                                              *
* Disciplina: Linguagem de Programação em C                                *
* Professor: José Grimaldo                                                 *
* Aluno: D. K. Mariano                                                     *
* Descrição: Crie uma função que concatene duas strings em uma nova string *
* alocada dinamicamente com o tamanho apropriado.                          *
***************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char* concate(const char *strA, const char *strB){

    int tamMes = strlen(strA) + strlen(strB) + 1;

    char *mesclado = (char*)malloc(sizeof(char) * tamMes);

    if(mesclado == NULL){
        printf("Erro ao alocar memória.\n");
        return NULL; // encerra a função atual
    }

    strcpy(mesclado, strA);

    strcat(mesclado, strB);

    return mesclado;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char strA[] = "Olá,";

    char strB[] = " mundo!";

    char *mesclado = concate(strA, strB);

    printf("strA: %s \n", strA);
    printf("strB: %s \n", strB);
    printf("mesclado: %s \n", mesclado);

    free(mesclado);

    return 0;
}
