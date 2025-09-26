/**********************************************************************************
* Data: 25/09/2025                                                                *
* Exerc�cio: Questa�o 07 da Prova                                                 *
* Institui��o de Ensino: UNEB                                                     *
* Disciplina: Linguagem C                                                         *
* Professor: Jos� Grimaldo                                                        *
* Aluno: D. K. Mariano                                                            *
* Descri��o: Implemente uma fun��o em C que recebe como par�metros um array de    *
* inteiros arr e seu tamanho Tam. A fun��o deve retornar o n�mero de elementos    *
* que aparecem exatamente uma vez no array. Ou seja, ela deve contar quantos      *
* n�meros s�o �nicos dentro do array.                                             *
* Entrada:                                                                        *
*   - Um array de inteiros arr com Tam elementos.                                 *
*   - Um inteiro Tam representando o n�mero de elementos no array.                *
*Sa�da:                                                                           *
*   - Um �nico n�mero inteiro representando quantos elementos aparecem exatamente *
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

    printf("\nA quantidade de elementos �nicos � igual a %d.", qtd_exclusivo);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}

