#include <stdio.h>
#include <locale.h>


float alterarValorPonteiro(float *ptr){
    return 20;
}


int main(void){
    setlocale(LC_ALL, "Portuguese");

    float x = 15.78;

    float *xptr = &x;

    printf("Valor de x antes da função: %f \n", x);

    x = alterarValorPonteiro(xptr);

    printf("Valor de x após função: %f \n", x);

    return 0;
}

