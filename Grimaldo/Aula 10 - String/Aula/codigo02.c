#include <stdio.h>
#include <locale.h>




int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char strA[80] = "Uma história para ser contada";

    char strB[80];

    int i = 0;

    while(strA[i] != '\0'){
        strB[i] = strA[i];
        i++;
    }

    strB[i] = '\0';

    puts(strB);

    return 0;
}
