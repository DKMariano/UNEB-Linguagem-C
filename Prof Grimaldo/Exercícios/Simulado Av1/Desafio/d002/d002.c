/*******************************************************************
* Data: 21/09/2025                                                 *
* Exercício: 002 do Simulado 01                                    *
* Instituição de Ensino: UNEB                                      *
* Disciplina: Linguagem C                                          *
* Professor: José Grimaldo                                         *
* Aluno: D. K. Mariano                                             *
* Descrição: Encontrar a soma dos três menores números de um vetor *
* Exemplo:                                                         *
*     - Entrada: [1, 2, 9, 10, 15, 20, 7]                          *
*     - Saída: 10.                                                 *
*******************************************************************/



#include <stdio.h>
#include <locale.h>
#define TAMANHO 7

int soma_elementos(int vetor[], int tamanho){
    int soma = 0;

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int temp = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        soma += vetor[i];
    }

    return soma;
}

void imprimir_vetor(int vetor[], int tamanho){
    printf("Vetor = { ");
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho -1){
            printf("%d ", vetor[i]);
        }else{
            printf("%d, ", vetor[i]);
        }
    }
    printf("}");
}

int main(void){
    setlocale(LC_ALL, "POrtuguese");
    int vetor[TAMANHO] = {1, 2, 9, 10, 15, 20, 7};
    int soma = 0;

    imprimir_vetor(vetor, TAMANHO);

    soma = soma_elementos(vetor, TAMANHO);

    printf("\n\nA soma dos 3 menores números do vetor é %d.", soma);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
