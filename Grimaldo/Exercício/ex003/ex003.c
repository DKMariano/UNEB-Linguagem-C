/**************************************************************************
* Data: 30/10/2025                                                        *
* Exercício: 003 – Aula 7: Struct                                         *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
*                                                                         *
* Descrição:                                                              *
* 1. Estrutura Básica e Função em C                                       *
*                                                                         *
* Crie uma struct que represente um ponto 2D simples em um plano          *
* cartesiano. A struct deve ter dois campos inteiros: x e y.              *
*                                                                         *
* Escreva uma função que receba duas structs como entrada e calcule a     *
* distância entre elas, utilizando a fórmula da distância euclidiana:     *
*                                                                         *
*     distância = sqrt( (x2 - x1)² + (y2 - y1)² )                         *
*                                                                         *
* Dica: Como o C não possui uma função embutida para calcular raízes      *
* quadradas, utilize a função sqrt() da biblioteca <math.h>.              *
**************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} Coordenada;


void distancia_euclidiana(Coordenada p1, Coordenada p2){
    // distancia de x
    float dx = (p2.x - p1.x);
    
    // distancia de y
    float dy = (p2.y - p1.y);
    
    float distancia = sqrt(dx * dx + dy * dy);
    
   
    printf ("\n Distância: %f", distancia);
    
}

int main(void){
    Coordenada pontos1 = (Coordenada){
        .x = 10,
        .y = 15
    };
    
    Coordenada pontos2 = (Coordenada){
        .x = 30,
        .y = 20,
    };
    
    distancia_euclidiana(pontos1, pontos2);
    
    return 0;
}