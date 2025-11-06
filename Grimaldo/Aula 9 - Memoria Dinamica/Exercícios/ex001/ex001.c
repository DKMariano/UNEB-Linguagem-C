/************************************************************************
* Data: 01/11/2025                                                      *
* Exercício: 001 – Aula 9: Memória Dinâmica                             *
* Instituição de Ensino: UNEB                                           *
* Disciplina: Linguagem de Programação em C                             *
* Professor: José Grimaldo                                              *
* Aluno: D. K. Mariano                                                  *
* Descrição: Escreva uma função recursiva em C chamada somaDigitos que  *
* receba um número inteiro positivo n e retorne a soma de seus dígitos. *
* Observe o exemplo                                                     *
*   Entrada: 1234                                                       *
*   Saída: 10                                                           *
*   (Explicação: 1+2+3+4=10).                                           *
************************************************************************/

#include <stdio.h>
#include <locale.h>

int somaDigitos(int n){
    if(n >= 0 && n <= 9){
        return n;
    }else{
        return n % 10 +somaDigitos(n/10);
    }


}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 1234;


    printf("Soma dos digitos %d: %d\n",num, somaDigitos(num));

    return 0;
}
