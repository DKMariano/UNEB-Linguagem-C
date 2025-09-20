/***********************************************************************************
* Data: 20/09/2025                                                                 *
* Exercício: 003 da Aula 3 - Operadores e Controle de Fluxo                        *
* Instituição de Ensino: UNEB                                                      *
* Disciplina: Linguagem C                                                          *
* Professor: José Grimaldo                                                         *
* Aluno: D. K. Mariano                                                             *
* Descrição: Tente corrigir o loop para imprimir o vetor ao contrário corretamente *
* utilizando unsigned int                                                          *
* #include <stdio.h>                                                               *
* #include <stdlib.h>                                                              *
*                                                                                  *
* int main()                                                                       *
* {                                                                                *
*     char nomes[][255] = {"jose", "joao", "jeremias", "jeanne", "jenivaldo"};     *
*                                                                                  *
*    unsigned int ui = 0;                                                          *
*                                                                                  *
*     // Percorrendo em ordem inversa                                              *
*     for (ui = 4; ui >= 0; ui--)                                                  *
*     {                                                                            *
*         printf("Nome: %s\n", nomes[ui]);                                         *
*         printf("ui: %d\n", ui);                                                  *
*     }                                                                            *
*     printf("finalizou a execução %d\n", ui);                                     *
*                                                                                  *
*     return 0;                                                                    *
* }                                                                                *
***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nomes[][255] = {"josé", "joão", "jeremias", "jeanne", "jenivaldo"};

    // Descobrir quantos elementos o vetor "nomes" possui.
    // sizeof(nomes) → tamanho total em bytes do array completo
    // sizeof(nomes[0]) → tamanho em bytes de UM elemento (uma string de 255 chars)
    // A divisão dá o total de elementos.
    int tamanho_vetor = sizeof(nomes) / sizeof(nomes[0]);

    unsigned int ui = 0;

    // IMPORTANTE: o loop foi escrito desta forma para evitar o problema do UNDERFLOW.
    //
    // O que é UNDERFLOW?
    // Se usássemos um loop tradicional assim:
    //     for (ui = tamanho_vetor - 1; ui >= 0; ui--)
    // o que aconteceria?
    // - Como "ui" é unsigned int, ele nunca pode ser negativo.
    // - Quando "ui" chegar a 0 e fizer "ui--", ele NÃO vira -1.
    // - Ele "estoura" e assume o maior valor possível de unsigned int (UINT_MAX).
    //   Exemplo: em um sistema 32 bits, isso seria 4.294.967.295.
    // - Resultado: a condição "ui >= 0" sempre será verdadeira (porque unsigned nunca é < 0).
    // - Consequência: LOOP INFINITO
    //
    // A forma "for (ui = tamanho_vetor; ui-- > 0;)" resolve isso, porque:
    // - Primeiro verifica "ui > 0".
    // - Depois faz o "ui--".
    // Assim, quando "ui" chega em 0, o teste falha e o loop encerra corretamente.

    for (ui = tamanho_vetor; ui-- > 0;)
    {
        // Percorrendo em ordem inversa
        printf("Nome: %s\n", nomes[ui]);
        printf("ui: %u\n", ui);
    }
    printf("finalizou a execução %u\n", ui);

    return 0;
}
