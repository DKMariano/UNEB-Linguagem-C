Encontre as diferenças entre os programas abaixo

// Programa 1
// struct point { double x; double y; };
// → Define um tipo nomeado chamado struct point.
// Para criar uma variável, é obrigatório escrever struct point, pois ainda não foi criado um alias (typedef).
// test.x e test.y recebem valores normalmentE
#include <stdio.h>
struct point { double x; double y; };
int main(void) {
    struct point test;
    test.x = .25; test.y = .75;
    printf("[%f %f]\n", test.x, test.y);
    return 0;
}

// Programa 2
// typedef struct { ... } Point;
// → Cria um tipo anônimo, mas dá a ele um apelido (Point).
// Agora não é mais necessário escrever struct.
// Point passa a ser um tipo completo, como int ou float.
#include <stdio.h>
typedef struct { double x; double y; } Point;
int main(void) {
    Point test;
    test.x = .25; test.y = .75;
    printf("[%f %f]\n", test.x, test.y);
    return 0;
}

// Programa 3
// Explicação:
// Mesmo tipo do Programa 2, mas agora a variável é inicializada no momento da declaração.
// Os valores .25 e .75 são atribuídos na ordem dos membros (primeiro x, depois y).
// Isso é chamado de inicialização composta ou, de forma mais explícita (Designated Initializer):
// Point test = {valor_x, valor_y};
#include <stdio.h>
typedef struct { double x; double y; } Point;
int main(void) {
    Point test = {.25, .75};
    printf("[%f %f]\n", test.x, test.y);
    return 0;
}
