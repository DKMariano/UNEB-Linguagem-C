/********************************************************************************************
* Data: 25/09/2025                                                         	                *
* Exerc�cio: 002 da Prova                                                                   *
* Institui��o de Ensino: UNEB                                              	                *
* Disciplina: Linguagem C                                              		                *
* Professor: Jos� Grimaldo                                                 	                *
* Aluno: D. K. Mariano                                                    	 	            *
* Descri��o: Implemente uma fun��o chamada listaPrimos em C que recebe um n�mero inteiro    *
* positivo n e imprime todos os n�meros primos entre 2 e n (inclusivo). Note que n sempre   *
* ser� maior ou igual a dois. Essa quest�o n�o permite nota parcial.			            *
* Defini��o:										                                        *
*    - Um n�mero primo � aquele que � maior que 1 e divis�vel apenas por 1 e por ele mesmo. *
* Exemplo:										                                            *
*    - Para n = 11 deve ser impresso na tela: 2 3 5 7 11				                    *
********************************************************************************************/

#include <stdio.h>

// Declara��o (prot�tipo)
void  listaPrimos(int num){
    int cont = 0;
    int primo = 0;

    for(int i = 2; i <= num; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                primo++;
            }
        }
        if (primo == 2){
            printf("  %d  ", i);
        }
        primo = 0;
    }

}

// Fun��o principal
int main()
{
    int num = 11;

    listaPrimos(num);

    return 0;
}

