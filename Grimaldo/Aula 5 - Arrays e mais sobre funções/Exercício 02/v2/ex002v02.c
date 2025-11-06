/**********************************************************************************************
* Data: 13/09/2025                                                                            *
* Exercício: 002 da Aula 5 - Arrays e mais sobre funções                                      *
* Instituição de Ensino: UNEB                                                                 *
* Disciplina: Linguagem C                                                                     *
* Professor: José Grimaldo                                                                    *
* Aluno: D. K. Mariano                                                                        *
* Descrição: Escreva uma função que encontre e retorne o maior valor em um array de inteiros. *
* Escreva um teste para comprovar o funcionamento                                             *
**********************************************************************************************/


#include <stdio.h>
#include <locale.h>

// Solicita um número até o usuário digitar um valor válido
int determina_tamanho(){
    int tamanho = 0;
    do{
        printf("\nQual é o tamanho do array? ");
        scanf("%d", &tamanho);
        if (tamanho <= 0){
            printf("\nErro: o tamanho do array deve ser positivo!\n\n");
        }
    }while(tamanho <= 0);
    return tamanho;
}

// Retorna o maior valor presente nesse array
int encontra_maior(int array[], int tamanho){
    int  maior = array[0];
    for (int i = 0; i < tamanho; i++){
        if(array[i]> maior){
            maior = array[i];
        }
    }
    return maior;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 0;

    tamanho = determina_tamanho();

    int array[tamanho];

    // Entrada dos elementos do array
    for (int i = 0; i < tamanho; i++){
        printf("\nDigite o %dº elemento do array: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior_array = encontra_maior(array, tamanho);


    printf("\nO maior elemento do array é %d.",  maior_array);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
