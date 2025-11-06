/*****************************************************************
* Data: 01/11/2025                                               *
* Exercício: 008 – Aula 8: Ponteiro                              *
* Instituição de Ensino: UNEB                                    *
* Disciplina: Linguagem de Programação em C                      *
* Professor: José Grimaldo                                       *
* Aluno: D. K. Mariano                                           *
* Descrição: Escreva uma função  que  inverte um array. Use-a em *
*`int valores[] = {1, 2, 3, 4, 5};` e imprima o array invertido. *
*****************************************************************/

#include <stdio.h>
#include <locale.h>

void reverte(int *arr, int tamanho){
    for(int i = 0; i < tamanho / 2; i++){
        int temp = *(arr + i);
        *(arr + i) = *(arr + (tamanho - 1 - i));
        *(arr + (tamanho -1 - i)) = temp;
    }

}
void imprimirArray(int *arr, int tamanho){
    printf("{ ");
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho - 1){
            printf("%d ", *(arr + i));
        } else{
            printf("%d, ", *(arr + i));
        }
    }
    printf("}\n");

}
int main(void){
    setlocale(LC_ALL, "Portuguese");

    int valores[] = {1, 2, 3, 4, 5};

    int tamanho = sizeof(valores) / sizeof(valores[0]);

    int *ptr = &valores[0];

    printf("\nArray normal:");
    imprimirArray(ptr, tamanho);

    reverte(ptr, tamanho);

    printf("\nArray revertido:");
    imprimirArray(ptr, tamanho);

    return 0;
}
