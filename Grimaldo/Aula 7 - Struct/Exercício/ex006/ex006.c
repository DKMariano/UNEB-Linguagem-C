/**************************************************************************
* Data: 01/11/2025                                                        *
* Exercício: 006 – Aula 7: Struct                                         *
* Instituição de Ensino: UNEB                                             *
* Disciplina: Linguagem de Programação em C                               *
* Professor: José Grimaldo                                                *
* Aluno: D. K. Mariano                                                    *
* Descrição: Escreva uma função areaRetangulo() que calcule a área de um  *
* retângulo.                                                              *
**************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct{
    float lado1;
    float lado2;
    float lado3;
} Triangulo;


// Retorna o semiperímetro (p) do triângulo.
float calcularSemiPerimetro(Triangulo t){
    return (t.lado1 + t.lado2 + t.lado3) / 2;
};

// calcula a área utilizando a fórmula de Heron.
float calcularArea(Triangulo t, float p){
    return sqrt (p * (p - t.lado1)* (p - t.lado2)* (p - t.lado3));
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    Triangulo isosceles = (Triangulo){
        .lado1 = 10,
        .lado2 = 10,
        .lado3 = 12
    };

    float semiperimetro = calcularSemiPerimetro(isosceles);

    float area = calcularArea(isosceles, semiperimetro);

    printf("=== TRIÂNGULO ISÓSCELES ===\n");
    printf("Lado 1: %.2f\n", isosceles.lado1);
    printf("Lado 2: %.2f\n", isosceles.lado2);
    printf("Lado 3: %.2f\n", isosceles.lado3);
    printf("-----------------------------\n");
    printf("Semiperímetro: %.2f\n", semiperimetro);
    printf("Área calculada: %.2f\n", area);
    printf("-----------------------------\n");

    return 0;
}
