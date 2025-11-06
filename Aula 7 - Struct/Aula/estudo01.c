#include <stdio.h> // Biblioteca padrão de entrada e saída (necessária para printf)

// Define uma constante simbólica TAMANHO com valor 50
// Essa constante será usada para determinar o tamanho do vetor de caracteres "nome_filme".
#define TAMANHO 50

// Declaração de uma struct anônima (sem nome de tipo definido com "typedef")
// Essa struct será usada para agrupar dados de um "filme" em um mesmo bloco de memória.
struct {
    int num_tickets;            // 4 bytes (normalmente) - número de ingressos
    double preco_trickets;      // 8 bytes (normalmente) - preço de cada ingresso
    char nome_filme[TAMANHO];   // 50 bytes (array de caracteres)
} part1; // Declaração de uma variável do tipo dessa struct, chamada "part1"


int main(void){

    /*
     * IMPORTANTE: sizeof(struct) retorna o tamanho total da estrutura em bytes.
     * Esse valor pode ser MAIOR que a soma dos tamanhos individuais dos membros!
     * Isso acontece por causa do "padding" (preenchimento de bytes extras) que o compilador
     * insere automaticamente para alinhar os dados na memória.
     *
     * Por exemplo:
     *  - O processador geralmente exige que tipos diferentes (como int, double, etc.)
     *    comecem em endereços de memória múltiplos do seu próprio tamanho (alinhamento).
     *  - Assim, entre os membros da struct, o compilador pode adicionar bytes "vazios"
     *    (padding) para garantir esse alinhamento.
     *  - Isso melhora o desempenho de acesso à memória, mas pode desperdiçar alguns bytes.
     */

    printf("\nTamanho total da struct: %ld bytes", sizeof(part1));

    /*
     * Agora vamos imprimir o tamanho de cada membro individualmente,
     * para comparar a soma com o tamanho total da struct.
     */
    printf("\nTamanho do membro num_tickets (int): %ld bytes", sizeof(part1.num_tickets));

    printf("\nTamanho do membro preco_trickets (double): %ld bytes", sizeof(part1.preco_trickets));

    printf("\nTamanho do membro nome_filme (char[50]): %ld bytes", sizeof(part1.nome_filme));

    /*
     * Observação didática:
     * Soma dos tamanhos aparentes:
     *    int (4) + double (8) + char[50] = 62 bytes
     *
     * Porém, sizeof(part1) provavelmente resultará em 64 bytes.
     * Os 2 bytes "a mais" vêm do alinhamento (padding) para deixar a struct múltipla de 8 bytes,
     * já que o membro de maior tamanho é o double (8 bytes).
     *
     * Regras gerais (podem variar conforme compilador/arquitetura):
     *  - Cada membro é alinhado a um múltiplo do seu próprio tamanho (ou do maior tipo anterior).
     *  - O tamanho final da struct é arredondado para o múltiplo do tamanho do seu membro mais "largo".
     */

    getchar();
    return 0;
}
