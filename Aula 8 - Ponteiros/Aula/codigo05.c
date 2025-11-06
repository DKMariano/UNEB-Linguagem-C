#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int *ptr = arr;  // arr → &arr[0]

    int v = sizeof(arr)/sizeof(arr[0]);

    printf("1º Elemento do array (índice): %d \n", arr[0]);
    printf("1º Elemento do array (ponteiro): %d \n", *ptr);
    printf("1º Elemento do array (variável): %d \n", v);

    printf("\nImprimindo elementos com for e ponteiros\n");

    for(int i =0; i < v; i++){
        printf("%dº Elemento: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}


