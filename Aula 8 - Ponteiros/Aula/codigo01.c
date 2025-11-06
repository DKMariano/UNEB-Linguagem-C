#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int *ptr;

    printf("Tamanho da variável *ptr antes de ser inicializada = %ld byte(s)\n", sizeof(ptr));

    int v = 40;

    ptr = &v;

    printf("Tamanho da variável = %ld byte(s)\n", sizeof(v));
    printf("Tamanho da variável *ptr após ser inicializada = %ld byte(s)\n", sizeof(ptr));
    printf("Conteúdo da variável v = %d\n", v);
    printf("Endereço da varíavel v = %p\n", &v);
    printf("Endereço da variável ptr = %p\n", ptr);
    printf("Conteúdo da variavel ptr = %d\n", *ptr);

    return 0;
}

