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


#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configurar idioma/localização
#define TAMANHO 5    // Constante que define o tamanho fixo do vetor

// ---------------------------
// Função: rotacione_direita
// Rotaciona o vetor para a direita por "rotacao" posições.
// Exemplo: [1,2,3,4,5], rotacao=2 → [4,5,1,2,3]
// ---------------------------
void rotacione_direita(int vetor[], int tamanho, int rotacao){
    int vetor_rotacionado[tamanho]; // Vetor auxiliar para armazenar resultado
    int posicao = 0;                // Índice de origem no vetor original

    rotacao %= tamanho;             // Normaliza a rotação (ex.: rot=7 em vet[5] vira 2)

    for(int i = 0; i < tamanho; i++){
        // Fórmula: posição original = (i - rotacao) % tamanho
        posicao = (i - rotacao) % tamanho;

        // Em C, o operador % pode gerar resultado negativo.
        // Ex.: (-1 % 5) = -1 → índice inválido. Por isso corrigimos:
        if (posicao < 0) {
            posicao += tamanho; // Ajusta para dentro do intervalo [0..tamanho-1]
        }

        // Copia o elemento da posição calculada para o vetor auxiliar
        vetor_rotacionado[i] = vetor[posicao];
    }

    // Copia de volta para o vetor original
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor_rotacionado[i];
    }
}

// ---------------------------
// Função: rotacione_esquerda
// Rotaciona o vetor para a esquerda por "rotacao" posições.
// Exemplo: [1,2,3,4,5], rotacao=2 → [3,4,5,1,2]
// ---------------------------
void rotacione_esquerda(int vetor[], int tamanho, int rotacao){
    int vetor_rotacionado[tamanho]; // Vetor auxiliar
    int posicao = 0;

    rotacao %= tamanho;             // Normaliza a rotação

    for(int i = 0; i < tamanho; i++ ){
        // Fórmula da rotação à esquerda: (i + rotacao) % tamanho
        // Aqui nunca dá negativo, pois tanto i quanto rotacao são positivos.
        posicao = (i + rotacao) % tamanho;

        vetor_rotacionado[i] = vetor[posicao];
    }

    // Copia de volta para o vetor original
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
        if(i == tamanho - 1){
            // Último elemento → não coloca vírgula no final
            printf("%d ", vetor[i]);
        } else {
            printf("%d, ", vetor[i]);
        }
    }
    printf("}\n");
}

// ---------------------------
// Função principal (main)
// ---------------------------
int main(void){
    setlocale(LC_ALL, "Portuguese"); // Ajusta acentuação (opcional em Windows/Linux)

    // Dois vetores iguais para testar rotação esquerda e direita separadamente
    int vetor1[TAMANHO] = {1, 2, 3, 4, 5};
    int vetor2[TAMANHO] = {1, 2, 3, 4, 5};

    int nrot = 2; // Número de posições para rotacionar

    printf("Vetor normal");
    imprimir_vetor(vetor1, TAMANHO);

    // Testa rotação à esquerda
    rotacione_esquerda(vetor1, TAMANHO, nrot);
    printf("\nVetor rotacionado esquerda %d posições", nrot);
    imprimir_vetor(vetor1, TAMANHO); // esperado: { 3, 4, 5, 1, 2 }

    // Testa rotação à direita
    rotacione_direita(vetor2, TAMANHO, nrot);
    printf("\nVetor rotacionado direita %d posições", nrot);
    imprimir_vetor(vetor2, TAMANHO); // esperado: { 4, 5, 1, 2, 3 }

    printf("\n\nPressione Enter para sair...");
    getchar(); // Espera entrada antes de encerrar
    return 0;
}
