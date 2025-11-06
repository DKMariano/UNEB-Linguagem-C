/************************************************************************
* Data: 01/11/2025                                                      *
* Exercício: 002 – Aula 9: Memória Dinâmica                             *
* Instituição de Ensino: UNEB                                           *
* Disciplina: Linguagem de Programação em C                             *
* Professor: José Grimaldo                                              *
* Aluno: D. K. Mariano                                                  *
* Descrição: Escreva uma função recursiva em C chamada fibonacci que    *
* receba um número inteiro não negativo n e retorne o n-ésimo termo da  *
* sequência de Fibonacci. Definição da Sequência:                       *
*   F(0) = 0                                                            *
*   F(1) = 1                                                            *
*   F(n) = F(n - 1) + F(n - 2), para n>1                                *
************************************************************************/

#include <stdio.h>
#include <locale.h>

// Função recursiva para calcular o n-ésimo termo de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;               // Caso base 1
    } else if (n == 1) {
        return 1;               // Caso base 2
    } else {
        // Caso recursivo: soma dos dois anteriores
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número não negativo.\n");
    } else {
        printf("F(%d) = %d\n", n, fibonacci(n));
    }

    return 0;
}
