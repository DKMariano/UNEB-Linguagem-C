/********************************************************************************
* Data: 21/09/2025                                                              *
* Exerc�cio: 001 do Simulado 01                                                 *
* Institui��o de Ensino: UNEB                                                   *
* Disciplina: Linguagem C                                                       *
* Professor: Jos� Grimaldo                                                      *
* Aluno: D. K. Mariano                                                          *
* Descri��o: Voc� deve implementar uma fun��o em C chamada encontraExclusivo,   *
* que encontra e retorna o primeiro n�mero que aparece no vetor arr1 e n�o no   *
* vetor arr2. Caso todos os n�meros de arr1 estejam presentes em arr2, a fun��o *
* deve retornar -1.                                                             *
********************************************************************************/



#include <stdio.h>

int encontraExclusivo(int arr1[], int arr2[], int tamanho1, int tamanho2){
    for(int i = 0; i < tamanho1; i++){
        int contador = 0;
        for(int j = 0; j < tamanho2; j++){
            if(arr1[i] == arr2[j]){
                contador++;
                break;
            }
        }
        if(contador == 0){
            return arr1[i];
        }
    }

    return -1;
}
int main(void){
    int arr1[5] = {1, 8, 4, 31, 6};

    int arr2[5] = {6, 1, 3, 8, 4};

    int retorno = 0;

    retorno = encontraExclusivo(arr1, arr2, 5, 5);

    printf("%d", retorno);

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
