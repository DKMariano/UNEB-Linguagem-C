#include <stdio.h>

int main(void) {
    int x = 42;
    // 'x' é uma variável comum (nível 0).
    // O compilador reserva espaço suficiente para armazenar um inteiro (geralmente 4 bytes).
    // Exemplo: suponha que x esteja no endereço 0x1000 e seu conteúdo seja 42.

    int *p = &x;
    // 'p' é um ponteiro para int (nível 1).
    // Ele armazena o ENDEREÇO de 'x'.
    // Assim, o valor de 'p' é &x (exemplo: 0x1000).
    // O operador '&' ("address-of") obtém o endereço de uma variável.
    // O tipo de p é "int *", e o valor de *p é o conteúdo de x (42).

    int **pp = &p;
    // 'pp' é um ponteiro para ponteiro de int (nível 2).
    // Ele guarda o ENDEREÇO de 'p'.
    // Assim, o valor de 'pp' é &p (exemplo: 0x2000).
    // O operador '*' pode ser usado duas vezes:
    //    *pp  → acessa o valor armazenado em 'p'  (ou seja, o endereço de x)
    //    **pp → acessa o valor armazenado em 'x' (ou seja, 42)

    printf("x    = %d\n", x);
    // imprime o valor direto de x (conteúdo da variável)

    printf("*p   = %d\n", *p);
    // '*p' lê o valor contido no endereço armazenado em 'p' → valor de x (42)

    printf("**pp = %d\n", **pp);
    // '**pp' lê o valor contido no endereço armazenado em '*pp' (que é o mesmo que p)
    // portanto, '**pp' = x = 42

    printf("&x   = %p\n", (void*)&x);
    // '&x' mostra o endereço de memória de x (ex: 0x1000)
    // '%p' é o formato para imprimir endereços de ponteiros (como void*)

    printf("p    = %p\n", (void*)p);
    // 'p' contém o endereço de x → deve imprimir o mesmo valor que &x

    printf("*pp  = %p\n", (void*)*pp);
    // '*pp' é o conteúdo de 'pp' → que é o valor de 'p' → o endereço de x
    // imprime o mesmo endereço de &x

    printf("&p   = %p\n", (void*)&p);
    // imprime o endereço da variável 'p' na memória (ex: 0x2000)

    printf("pp   = %p\n", (void*)pp);
    // 'pp' contém o endereço de 'p' → deve imprimir o mesmo que &p

    // Agora, vamos modificar x indiretamente através de dois níveis de ponteiros:
    **pp = 100;
    // Lê-se: "vá até o endereço contido em 'pp' (que é p),
    // depois vá até o endereço contido em 'p' (que é x),
    // e então atribua 100 a esse local de memória."
    // Resultado: x passa de 42 → 100.

    printf("x (apos **pp=100) = %d\n", x);
    // Confirma que o valor de x foi alterado via ponteiro de ponteiro

    return 0;
}


