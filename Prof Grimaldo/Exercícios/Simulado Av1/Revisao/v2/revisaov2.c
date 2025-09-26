/*********************************************************************************
* Data: 25/09/2025                                                               *
* Exerc�cio: 001 da Revis�o da Prova                                             *
* Institui��o de Ensino: UNEB                                                    *
* Disciplina: Linguagem C                                                        *
* Professor: Jos� Grimaldo                                                       *
* Aluno: D. K. Mariano                                                           *
* Descri��o: Escreva uma fun��o em C que altere  e imprima um vetor de n�meros   *
* previamente definido, de modo que cada posi��o passe a armazenar a soma do     *
* elemento anterior e do pr�ximo. Caso a posi��o n�o possua elemento anterior ou *
* pr�ximo (primeiro e �ltimo �ndices), considere o valor inexistente como zero.  *
*********************************************************************************/

#include <stdio.h>
#include <locale.h>


/**
 * Imprime o vetor no formato: { a0, a1, a2, ..., an-1 }
 */
void imprimir_vetor(int vetor[], int tamanho){
    printf("= { ");
    for(int i = 0; i < tamanho; i ++){
        if(i == tamanho - 1){
            printf("%d ", vetor[i]);
        }else {
            printf("%d, ", vetor[i]);
        }
    }
    printf("}\n");

}
/**
 * Altera o vetor "in place" para que cada posi��o passe a armazenar
 * a soma do elemento anterior e do pr�ximo.
 * Nas extremidades, o vizinho inexistente � considerado 0.
 *
 * Ex.: [1, 2, 3, 4, 5] -> [2, 4, 6, 8, 4]
 *      (0+2, 1+3, 2+4, 3+5, 4+0)
 */
void alterar_vetor(int vetor[], int tamanho){
    int temp = 0;
    int anterior = vetor[0];
    int penultimo = vetor[tamanho - 2];

    if(tamanho == 1){
        vetor[0] = 0;
    }else{
        for(int i = 0; i < tamanho; i++){
            if(i == 0){
                anterior = vetor[0];
                vetor[i] = vetor[i + 1];
            } else if (i == tamanho - 1){
                vetor[i] = penultimo;
            } else{
                temp = vetor[i];
                vetor[i] = anterior + vetor[i+1];
                anterior = temp;
            }
        }
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("\nVetor original");
    imprimir_vetor(vetor, tamanho);

    alterar_vetor(vetor, tamanho);

    printf("\nVetor alterado");
    imprimir_vetor(vetor, tamanho);


    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}

