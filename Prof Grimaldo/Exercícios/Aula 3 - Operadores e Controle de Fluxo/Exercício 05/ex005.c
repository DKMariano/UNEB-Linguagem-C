/**************************************************************************
* Data: 21/09/2025                                                        *
* Exercício: 005 da Aula 5 - Matrizes                                     *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem C                                                 *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Crie um algoritmo em C que leia um número inteiro positivo e *
* calcule o fatorial desse número.                                        *
**************************************************************************/



#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    int fatorial = 1;

    do{
        printf("\nDigite o número inteiro não-negativo que você deseja descobrir o fatorial: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Erro: O número digitado é negativo!\n");
        }

    } while(num < 0);

    if (num == 0 || num ==1){
        fatorial = 1;
        printf("\nO fatorial de %d é %d.", num, fatorial);
    }else{
        for(int i = 2; i <= num; i++){
            fatorial *= i;
        }
        printf("\nO fatorial de %d é %d.", num, fatorial);
    }

    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;
}
