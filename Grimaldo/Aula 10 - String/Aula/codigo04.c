#include <stdio.h>
#include <string.h>

int main(void) {
    const char str1[] = "casa";
    const char str2[] = "casamento";

    // Comparação completa
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("strcmp: '%s' e '%s' são IGUAIS\n", str1, str2);
    } else if (cmp < 0) {
        printf("strcmp: '%s' vem ANTES de '%s'\n", str1, str2);
    } else {
        printf("strcmp: '%s' vem DEPOIS de '%s'\n", str1, str2);
    }

    // Comparação limitada
    size_t caracteres = 5; // preferir size_t

    int ncmp = strncmp(str1, str2, caracteres);
    if (ncmp == 0) {
        printf("strncmp(%zu): '%s' e '%s' são iguais nos primeiros %zu caracteres\n",
               caracteres, str1, str2, caracteres);
    } else if (ncmp < 0) {
        printf("strncmp(%zu): '%s' vem ANTES de '%s'\n", caracteres, str1, str2);
    } else {
        printf("strncmp(%zu): '%s' vem DEPOIS de '%s'\n", caracteres, str1, str2);
    }

    return 0;
}
