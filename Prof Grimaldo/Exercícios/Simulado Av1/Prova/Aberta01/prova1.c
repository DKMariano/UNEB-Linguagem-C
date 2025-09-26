/**********************************************************************************
* Data: 25/09/2025                                                                *
* Exercício: Questaão 07 da Prova                                                 *
* Instituição de Ensino: UNEB                                                     *
* Disciplina: Linguagem C                                                         *
* Professor: José Grimaldo                                                        *
* Aluno: D. K. Mariano                                                            *
* Descrição: Implemente uma função em C que recebe como parâmetros um array de    *
* inteiros arr e seu tamanho Tam. A função deve retornar o número de elementos    *
* que aparecem exatamente uma vez no array. Ou seja, ela deve contar quantos      *
* números são únicos dentro do array.                                             *
* Entrada:                                                                        *
*   - Um array de inteiros arr com Tam elementos.                                 *
*   - Um inteiro Tam representando o número de elementos no array.                *
*Saída:                                                                           *
*   - Um único número inteiro representando quantos elementos aparecem exatamente *
*   uma vez no array.                                                             *
**********************************************************************************/



#include <stdio.h>
#include <locale.h>



void imprimir_vetor(int vetor[], int tamanho){
    printf(" = { ");
    for(int i = 0; i < tamanho; i ++){
        if(i == tamanho - 1){
            printf("%d ", vetor[i]);
        }else {
            printf("%d, ", vetor[i]);
        }
    }
    printf("}\n");

}

int elemento_unico(int arr[], int tam){
    int contador = 0;
    int exclusivo = 0;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(arr[i] == arr[j]){
                contador++;
            }
        }
        if(contador == 1){
            exclusivo++;
        }
        contador = 0;
    }
    return exclusivo;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int qtd_exclusivo = 0;

    int vetor[] = {1, 1, 4, 8, 9, 4, 7, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("\nVetor normal");
    imprimir_vetor(vetor, tamanho);

    qtd_exclusivo = elemento_unico(vetor, tamanho);

    printf("\nA quantidade de elementos únicos é igual a %d.", qtd_exclusivo);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}

