/**************************************************************************
* Data: 02/11/2025                                                        *
* Exercício: 009 – Aula 8: Ponteiro                                       *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Escreva uma função void somaElementos(int *arr, int tamanho) *
* que calcula e imprime a soma dos elementos de um array de inteiros. No  *
* main, declare um array int numeros[] = {1, 2, 3, 4, 5, 6, 7};. Chame a  *
* função somaElementos passando o sub-array a partir do terceiro elemento *
* (ou seja, &numeros[2]) e o tamanho adequado, para calcular a soma dos   *
* elementos a partir do terceiro elemento do array original.              *
**************************************************************************/

#include <stdio.h>
#include <locale.h>

// calcula e imprime a soma dos elementos de um array de inteiros
void somaElementos(int *arr, int tamanho){
    int soma =  0;

    printf("\nSoma dos elementos do array a partir do 3º:\n");
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho - 1){
            printf("%d ", *(arr + i));
        }else{
            printf("%d + ", *(arr + i));
        }
        soma += *(arr + i);
    }

    printf("= %d\n", soma);
}

void imprimirArray(int *arr, int tamanho){
    printf("ArrayCompleto = { ");

    for(int i = 0; i < tamanho; i++){
        if(i == tamanho - 1){
            printf("%d ", *(arr + i));
        }else{
            printf("%d, ", *(arr + i));
        }
    }

    printf("}\n");

}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int numeros[] = {1, 2, 3, 4, 5, 6, 7};

    int tamanhoTotal = sizeof(numeros)/sizeof(numeros[0]);

    int *ptr = &numeros[2];


    imprimirArray(numeros, tamanhoTotal);

    somaElementos(ptr, tamanhoTotal - 2);


    return 0;
}
