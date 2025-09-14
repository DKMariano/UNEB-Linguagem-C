#include <stdio.h>
#define TAMANHOARR1 4
#define TAMANHOARR2 7
#define TAMANHORESUL (TAMANHOARR1 + TAMANHOARR2)

void mesclaArrays(int arr1[], int tamanho1, int arr2[], int tamanho2, int resultado[]){
    int i = 0, j = 0, k = 0;

    // intercala enquanto ambos tiverem elementos
    while(i < tamanho1 && j < tamanho2){
        resultado[k] = arr1[i];
        k++;
        i++;
        resultado[k] = arr2[j];
        k++;
        j++;
    }

    while(i < tamanho1){
        resultado[k] = arr1[i];
        k++;
        i++;
    }

    while(j < tamanho2){
        resultado[k] = arr2[j];
        k++;
        j++;
    }
}

void imprimir_arrays(int array[], int tamanho){
    for(int i = 0; i < tamanho;i++){
        printf("%d  ", array[i]);
    }
    printf("]");
}


int main(void){
    int arr1[TAMANHOARR1] = {0, 2, 4, 6 };
    int arr2[TAMANHOARR2] = {1, 3, 5, 7, 8, 9, 10};
    int resultado[TAMANHORESUL];

    mesclaArrays(arr1, TAMANHOARR1, arr2, TAMANHOARR2, resultado);

    printf("\nArr1: [ ");
    imprimir_arrays(arr1, TAMANHOARR1);

    printf("\nArr2: [ ");
    imprimir_arrays(arr2, TAMANHOARR2);

    printf("\nResultado: [ ");
    imprimir_arrays(resultado, TAMANHORESUL);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;

}
