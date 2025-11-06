/*************************************************************************************************
* Data: 14/09/2025                                                                               *
* Exercício: 005 da Aula 5 - Arrays e mais sobre funções                                         *
* Instituição de Ensino: UNEB                                                                    *
* Disciplina: Linguagem C                                                                        *
* Professor: José Grimaldo                                                                       *
* Aluno: D. K. Mariano                                                                           *
* Descrição: Escreva um programa que mescle dois arrays em um único array.                       *
* Instruções:                                                                                    *
*     - Defina dois arrays de inteiros.                                                          *
*     - Escreva uma função void mesclaArrays(int arr1[], int tamanho1, int arr2[], int tamanho2, *
*       int resultado[]) que mescle arr1 e arr2 em resultado.                                    *
*     - Na função main(), chame mesclaArrays() e imprima o array resultante.                     *
*************************************************************************************************/


#include <stdio.h>
#include <locale.h>

int define_tamanho(){
    int tamanho = 0;
    do{
        printf("\nQual é o tamanho do array? ");
        scanf("%d", &tamanho);
        if(tamanho <= 0){
            printf("\nQual é o tamanho do array? ");
        }

    }while(tamanho <= 0);

    return tamanho;
}

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
    setlocale(LC_ALL, "Portuguese");
    int tamanho1 = 0;
    int tamanho2 = 0;

    printf("\n===== 1º Array (arr1): =====");
    tamanho1 = define_tamanho();
    int arr1[tamanho1];

    for(int i = 0; i < tamanho1; i++){
        printf("\nDigite o %dº elemento do array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\n===== 1º Array (arr1): =====");
    tamanho2 = define_tamanho();
    int arr2[tamanho2];

    for(int i = 0; i < tamanho2; i++){
        printf("\nDigite o %dº elemento do array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int tamanho3 = tamanho1 + tamanho2;
    int resultado[tamanho3];

    mesclaArrays(arr1, tamanho1, arr2, tamanho2, resultado);

    printf("\nArr1: [ ");
    imprimir_arrays(arr1, tamanho1);

    printf("\nArr2: [ ");
    imprimir_arrays(arr2, tamanho2);

    printf("\nResultado: [ ");
    imprimir_arrays(resultado, tamanho3);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;

}
