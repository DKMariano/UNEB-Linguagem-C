/**************************************************************************
* Data: 21/09/2025                                                        *
* Exerc�cio: 005 da Aula 5 - Matrizes                                     *
* Institui��o de Ensino: UNEB                                             *
* Disciplina: Linguagem C                                                 *
* Professor: Jos� Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descri��o: Crie um algoritmo em C que leia um n�mero inteiro positivo e *
* calcule o fatorial desse n�mero.                                        *
**************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    int fatorial = 1;

    do{
        printf("\nDigite o n�mero inteiro n�o-negativo que voc� deseja descobrir o fatorial: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Erro: O n�mero digitado � negativo!\n");
        }

    } while(num < 0);

    if (num == 0 || num ==1){
        fatorial = 1;
        printf("\nO fatorial de %d � %d.", num, fatorial);
    }else{
        for(int i = 2; i <= num; i++){
            fatorial *= i;
        }
        printf("\nO fatorial de %d � %d.", num, fatorial);
    }

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
