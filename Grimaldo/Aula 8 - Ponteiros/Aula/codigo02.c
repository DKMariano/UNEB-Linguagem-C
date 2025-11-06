#include <stdio.h>
#include <locale.h>

int main(void) {

    // Configura a localização do programa (opcional)
    // Aqui usamos "pt_BR.UTF-8" para ajustar o idioma e formato regional.
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declara uma variável do tipo float e inicializa com 15.78.
    // O compilador reserva 4 bytes (geralmente) para armazenar esse valor.
    float x = 15.78f;

    // Declara um ponteiro para float chamado xptr1 e o inicializa com NULL.
    // NULL representa "nenhum endereço válido" (ou 0). Boa prática para evitar lixo de memória.
    float *xptr1 = NULL;

    // O operador "&" obtém o endereço da variável x.
    // Agora o ponteiro xptr1 passa a apontar para o mesmo local de memória que x ocupa.
    xptr1 = &x;

    // Outro ponteiro, xptr2, também é declarado e inicializado com o endereço de x.
    // Assim, xptr1 e xptr2 apontam para o mesmo objeto (x).
    float *xptr2 = &x;

    // A variável y recebe o valor armazenado em xptr1.
    // O operador "*" (dereference) acessa o conteúdo do endereço guardado em xptr1.
    // Portanto, *xptr1 == x.
    float y = *xptr1;   // equivalente a: y = x;

    // A variável v recebe o dobro do valor armazenado em x (acessado via xptr2).
    // Importante: adicionar parênteses por clareza.
    float v = 2 * (*xptr2); // equivalente a v = 2 * x;

    // A variável h recebe o conteúdo do endereço de x, acessando-o diretamente.
    // *(&x) significa: “pegue o endereço de x (&x) e depois o valor armazenado lá (*)”.
    // Isso é exatamente igual a escrever: h = x;
    float h = *(&x);

    // Aqui, alteramos o valor de x indiretamente.
    // O operador "*" acessa o conteúdo apontado por xptr1 e o substitui por 98.8.
    // Como xptr1 aponta para x, essa linha muda o valor da variável x na memória.
    *xptr1 = 98.8f;

    /***********************************************************************
    * IMPRESSÕES DE VALORES
    * Mostra como todas as variáveis e ponteiros se relacionam após a modificação.
    ***********************************************************************/
    printf("Valor de x (variável):                %.2f\n", x);
    printf("Valor de x via ponteiro xptr1:        %.2f\n", *xptr1);
    printf("Valor de x via ponteiro xptr2:        %.2f\n", *xptr2);
    printf("Valor de y (cópia antes da mudança):  %.2f\n", y);
    printf("Valor de v (2 * x antigo):            %.2f\n", v);
    printf("Valor de h (cópia do valor de x):     %.2f\n\n", h);

    /***********************************************************************
    * IMPRESSÕES DE ENDEREÇOS DE MEMÓRIA
    * Mostra como ponteiros e variáveis estão relacionados no espaço de memória.
    ***********************************************************************/
    printf("Endereço de x (variável):   %p\n", (void*)&x);
    printf("Endereço de xptr1 (ponteiro): %p\n", (void*)xptr1);
    printf("Endereço de xptr2 (ponteiro): %p\n", (void*)xptr2);
    printf("Endereço de y (variável):   %p\n", (void*)&y);
    printf("Endereço de v (variável):   %p\n", (void*)&v);
    printf("Endereço de h (variável):   %p\n", (void*)&h);

    /***********************************************************************
    * ANÁLISE FINAL
    * - xptr1 e xptr2 apontam para o mesmo endereço (o de x).
    * - *xptr1, *xptr2 e x têm o mesmo valor (98.8).
    * - y, v e h mantêm os valores antigos (15.78, 31.56 e 15.78),
    *   porque foram atribuídos antes da alteração de x.
    * - Cada variável (x, y, v, h) tem seu próprio endereço na memória.
    ***********************************************************************/

    return 0;
}
