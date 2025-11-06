#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO 50 // constante simbólica, caso precise usar futuramente

// Definição da struct
struct codigo_discagem {
    char pais[30]; // Nome do país
    int codigo;    // Código telefônico internacional
};

// Inicialização de um array constante de structs
const struct codigo_discagem codigo_paises[] = {
    {"Argentina", 54}, {"Bangladesh", 880},
    {"Brasil", 55}, {"Canadá", 1},
    {"China", 86}, {"Colômbia", 57},
    {"Austrália", 61}, {"Egito", 20},
    {"França", 33}, {"Alemanha", 49},
    {"Japão", 81}, {"Índia", 91},
    {"Indonésia", 62}, {"Irã", 98},
    {"Itália", 39}, {"Nigéria", 234},
    {"Paquistão", 92}, {"Filipinas", 63},
    {"Rússia", 7}, {"Turquia", 90},
    {"Estados Unidos", 1}, {"Vietnã", 84}
};

// Programa de teste opcional
int main(void) {
    int tamanho = sizeof(codigo_paises) / sizeof(codigo_paises[0]);

    printf("Lista de códigos internacionais:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%-15s -> +%d\n", codigo_paises[i].pais, codigo_paises[i].codigo);
    }

    return 0;
}
