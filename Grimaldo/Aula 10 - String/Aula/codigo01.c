#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char strA[80] = "Uma história para ser contada";

    char strB[80];

    char *ptrA = &strA[0];

    char *ptrB = &strB[0];

    while(*ptrA != '\0'){
      *ptrB = *ptrA;

      *ptrB++;

      *ptrA++;
    };

    *ptrB = '\0';

    puts(strB); // => printf("%s \n", strB);

    return 0;

}

