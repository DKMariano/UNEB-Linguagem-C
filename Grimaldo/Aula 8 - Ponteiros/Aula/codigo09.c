#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int arr[] = {10, 20, 30, 40, 50, -1};

    int *ptr = &arr[0];

    while(*ptr >= 0){
        printf("%d \n", *ptr++);
        sleep(1);
    }
    printf("Não deve imprimir -1 \n");

    return 0;

}
