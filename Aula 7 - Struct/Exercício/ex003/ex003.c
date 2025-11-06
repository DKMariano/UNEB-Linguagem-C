/********************************************************************************
* Data: 31/10/2025                                                              *
* Exercício: 003 – Aula 7: Struct                                               *
* Instituição de Ensino: UNEB                                                   *
* Disciplina: Linguagem de Programação em C                                     *
* Professor: José Grimaldo                                                      *
* Aluno: D. K. Mariano                                                          *
* Descrição: Crie uma struct que represente um ponto 2D simples em um plano     *
* cartesiano. A struct deve ter dois campos inteiros: x e y. Escreva uma        *
* função que receba duas structs como entrada e calcule a distância entre elas, *
* utilizando a fórmula da distância euclidiana:                                 *
*     distância = sqrt( (x2 - x1)² + (y2 - y1)² )                               *
* Dica: Como o C não possui uma função embutida para calcular raízes quadradas, *
* utilize a função sqrt() da biblioteca <math.h>.                               *
********************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} Coordenada;


// Função que calcula e retorna a distância entre dois pontos
float distancia_euclidiana(Coordenada p1, Coordenada p2){
    // distancia de x
    float dx = (p2.x - p1.x);

    // distancia de y
    float dy = (p2.y - p1.y);

    return sqrt(dx * dx + dy * dy);
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    Coordenada pontos1 = (Coordenada){
        .x = 10,
        .y = 15
    };

    Coordenada pontos2 = (Coordenada){
        .x = 30,
        .y = 20,
    };

    float distancia = distancia_euclidiana(pontos1, pontos2);

    printf("Distância entre os pontos (%d,%d) e (%d,%d): %.2f\n",pontos1.x, pontos1.y, pontos2.x, pontos2.y, distancia);

    return 0;
}
