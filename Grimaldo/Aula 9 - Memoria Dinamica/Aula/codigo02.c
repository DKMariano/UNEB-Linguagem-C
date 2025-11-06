#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptrM = malloc(5 * sizeof(int));
    int *ptrC = calloc(5, sizeof(int));

    if(ptrM == NULL){
        printf("Erro na alocação da memória. \n");
        return -1;
    }

    if(ptrC == NULL){
        printf("Erro na alocação da memória. \n");
        return -1;
    }

    //comportamento indefinido

    printf("Malloc sem inicializar = { ");
    for(int i = 0; i < 5; i++){
        if(i == 4){
            printf("%d ", ptrM[i]);
        }else{
            printf("%d, ", ptrM[i]);
        }
    }
    printf("} \n");

    printf("Calloc sem inicializar = { ");
    for(int i = 0; i < 5; i++){
        if(i == 4){
            printf("%d ", ptrC[i]);
        }else{
            printf("%d, ", ptrC[i]);
        }
    }
    printf("} \n");

    printf("Malloc = { ");
    for(int i = 0; i < 5; i++){
        ptrM[i] = i + 1;
        if(i == 4){
            printf("%d ", ptrM[i]);
        }else{
            printf("%d, ", ptrM[i]);
        }
    }
    printf("} \n");


    printf("Calloc = { ");
        for(int i = 0; i< 5; i++){
            ptrC[i] = i + 1;
            if( i == 4 ){
                printf("%d ", ptrC[i]);
            }else{
                 printf("%d, ", ptrC[i]);
            }
        }
    printf("} \n");

    free(ptrM);
    free(ptrC);

    return 0;

}
