#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase1[] = "Ola";
    char frase2[]= ", Mundo!";

    char *str = (char *) malloc (sizeof(char) * (strlen(frase1) + strlen(frase2) + 1));

    strcpy(str, frase1);

    strcat(str, frase2);

    printf("\n frase1: %s", frase1);

    printf("\n frase2: %s", frase2);

    printf("\n str: %s", str);

    return 0;
}
