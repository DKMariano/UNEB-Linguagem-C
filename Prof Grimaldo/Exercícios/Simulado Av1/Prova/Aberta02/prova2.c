/********************************************************************************************
* Data: 25/09/2025                                                         	                *
* Exercício: 002 da Prova                                                                   *
* Instituição de Ensino: UNEB                                              	                *
* Disciplina: Linguagem C                                              		                *
* Professor: José Grimaldo                                                 	                *
* Aluno: D. K. Mariano                                                    	 	            *
* Descrição: Implemente uma função chamada listaPrimos em C que recebe um número inteiro    *
* positivo n e imprime todos os números primos entre 2 e n (inclusivo). Note que n sempre   *
* será maior ou igual a dois. Essa questão não permite nota parcial.			            *
* Definição:										                                        *
*    - Um número primo é aquele que é maior que 1 e divisível apenas por 1 e por ele mesmo. *
* Exemplo:										                                            *
*    - Para n = 11 deve ser impresso na tela: 2 3 5 7 11				                    *
********************************************************************************************/

#include <stdio.h>

// Declaração (protótipo)
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

// Função principal
int main()
{
    int num = 11;

    listaPrimos(num);

    return 0;
}

