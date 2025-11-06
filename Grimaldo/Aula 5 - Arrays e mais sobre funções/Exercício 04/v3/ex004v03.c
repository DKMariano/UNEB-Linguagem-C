/***********************************************************************************************
* Data: 20/09/2025                                                                             *
* Exercício: 004 da Aula 5 - Arrays e mais sobre funções                                       *
* Instituição de Ensino: UNEB                                                                  *
* Disciplina: Linguagem C                                                                      *
* Professor: José Grimaldo                                                                     *
* Aluno: D. K. Mariano                                                                         *
* Descrição: Escreva uma função que encontre o segundo maior elemento em um array de inteiros. *
* Escreva um teste para comprovar o funcionamento                                              *
***********************************************************************************************/

#include <stdio.h>
#include <locale.h>



int define_tamanho(){
    int tamanho = 0;

    do{
        printf("\nQual é o tamanho do array? ");
        scanf("%d", &tamanho);
        if(tamanho <= 0){
            printf("\nErro: o tamanho do array deve ser positivo!\n\n");
        }

    }while(tamanho <= 0);

    return tamanho;
}



// Função que encontra o maior e o segundo maior valor de um array
// array[] -> vetor de inteiros de entrada
// tamanho -> número de elementos do vetor
void encontra_maiores(int array[], int tamanho){
    int temp = 0;

    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j <tamanho - i - 1; j++){
            if(array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
               }
        }
    }
    int maior = array[0];
    int segundo_maior = array[1];

    printf("\nMaior: %d ", maior);
    printf("\nSegundo Maior: %d ", segundo_maior);
}

// Função que imprime todos os elementos de um array
// array[] -> vetor de inteiros de entrada
// tamanho -> número de elementos do vetor
void imprime_array(int array[], int tamanho){
    printf("\nArray:[ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 0;

    tamanho = define_tamanho();

    int array[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("\nDigite o %dº elemento do array: ", i + 1);
        scanf("%d", &array[i]);
    }

    imprime_array(array, tamanho);
    encontra_maiores(array, tamanho);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;

}
