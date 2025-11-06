#include <stdio.h>
#include <locale.h>

void imprime(int *arr , int n){

    printf("Imprimindo elementos do array\n");

    for(int i =0; i < n; i++){
        printf("%dº Elemento: %d\n", i + 1, arr[i]);
    }

}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int v[] = {1, 3, 3};

    imprime(v, 3);


    return 0;
}
