/*************************************************************************
* Data: 23/09/2025                                                       *
* Exercício: 003 do Simulado 01                                          *
* Instituição de Ensino: UNEB                                            *
* Disciplina: Linguagem C                                                *
* Professor: José Grimaldo                                               *
* Aluno: D. K. Mariano                                                   *
* Descrição: Dado um vetor de inteiros e um número inteiro n, escreva    *
* um programa que rotacione o vetor para a esquerda por n posições.A     *
* rotação para a esquerda desloca cada elemento do vetor n posições      *
* para frente, e os elementos que “saem” pelo início devem ser colocados *
* no final do vetor.                                                     *
* Exemplo Entrada:                                                       *
*    - vetor = [1, 2, 3, 4, 5]                                           *
*    - nrot = 2                                                          *
*    - Saída:[3, 4, 5, 1, 2]                                             *
*************************************************************************/



#include <stdio.h>
#include <locale.h>
#define TAMANHO 5

// ---------------------------
// Função: rotacione_esquerda
// Rotaciona o vetor para a esquerda por "rotacao" posições.
// Exemplo: [1,2,3,4,5], rotacao=2 → [3,4,5,1,2]
// ---------------------------
void rotacione_esquerda(int vetor[], int tamanho, int rotacao){
    int vetor_rotacionado[tamanho];
    int posicao = 0;
    for(int i = 0; i < tamanho; i++ ){
        posicao = (rotacao + i) % tamanho;
        vetor_rotacionado[i] = vetor[posicao];
    }

    for(int i = 0; i < tamanho; i++ ){
        vetor[i] = vetor_rotacionado[i];
    }


}

// ---------------------------
// Função: imprimir_vetor
// Exibe o vetor formatado no console.
// Exemplo: { 1, 2, 3, 4, 5 }
// ---------------------------
void imprimir_vetor(int vetor[], int tamanho){
    printf(" = { ");
    for(int i = 0; i < tamanho; i++){
        if(i ==  tamanho - 1){
            printf("%d ", vetor[i]);
        } else{
            printf("%d, ", vetor[i]);
        }
    }
    printf("}\n");

}

// ---------------------------
// Função principal (main)
// ---------------------------
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAMANHO] = {1, 2, 3, 4, 5};
    int nrot = 2;
    printf("Vetor normal");
    imprimir_vetor(vetor, TAMANHO);

    rotacione_esquerda(vetor, TAMANHO, nrot);

    printf("\nVetor rotacionado esquerda %d posições", nrot);
    imprimir_vetor(vetor, TAMANHO);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
