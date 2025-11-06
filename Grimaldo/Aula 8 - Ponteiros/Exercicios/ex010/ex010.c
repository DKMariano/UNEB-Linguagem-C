/**************************************************************************
* Data: 02/11/2025                                                        *
* Exercício: 10 – Aula 8: Ponteiro                                        *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Implemente uma função em C que mescla dois arrays ordenados  *
* em um terceiro array, mantendo a ordem. Os arrays são de tamanhos fixos *
* e contêm inteiros em ordem crescente.                                   *
* Não use alocação dinâmica de memória; assuma que o terceiro array tem   *
* espaço suficiente. Use ponteiros para percorrer e mesclar os arrays     *
**************************************************************************/

#include <stdio.h>

void mesclar_arrays(const int *arr1, int tamanho1, const int *arr2, int tamanho2, int *mesclado, int tamanho3){
    const int *inicioArr1 = arr1;
    const int *inicioArr2 = arr2;

    const int *fimArr1 = arr1 + (tamanho1 - 1);
    const int *fimArr2 = arr2 + (tamanho2 - 1);

    while(inicioArr1 <= fimArr1 && inicioArr2 <= fimArr2){
        if(*inicioArr1 <= *inicioArr2){
            *mesclado = *inicioArr1 ;
            inicioArr1++;
        }else{
            *mesclado = *inicioArr2 ;
            inicioArr2++;
        }
        mesclado++;
    }

    while(inicioArr1 <= fimArr1){
        *mesclado = *inicioArr1;
        inicioArr1++;
        mesclado++;
    }

    while(inicioArr2 <= fimArr2){
        *mesclado = *inicioArr2;
        inicioArr2++;
        mesclado++;
    }

}


void imprimirArray(int *arr, int tamanho){
    printf("{ ");
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho -1){
            printf("%d ", *(arr + i));
        }else{
            printf("%d, ", *(arr + i));
        }
    }
    printf("} \n");
}

int main(void){

    int arr1[] = {1,3, 5, 7};
    int tamanho1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int tamanho2 = sizeof(arr2) / sizeof(arr2[0]);

    int tamanho3 = tamanho1 + tamanho2;
    int mesclado[tamanho3];

    mesclar_arrays(arr1, tamanho1, arr2, tamanho2, mesclado, tamanho3);

    printf("\nArr1 = ");
    imprimirArray(arr1, tamanho1);

    printf("\nArr2 = ");
    imprimirArray(arr2, tamanho2);

    printf("\nMesclado = ");
    imprimirArray(mesclado, tamanho3);

    return 0;
}
