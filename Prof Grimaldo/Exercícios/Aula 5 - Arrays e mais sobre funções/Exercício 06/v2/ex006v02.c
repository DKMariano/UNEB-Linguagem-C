/********************************************************************************************
* Data: 16/09/2025                                                                          *
* Exercício: 006 da Aula 5 - Arrays e mais sobre funções                                    *
* Instituição de Ensino: UNEB                                                               *
* Disciplina: Linguagem C                                                                   *
* Professor: José Grimaldo                                                                  *
* Aluno: D. K. Mariano                                                                      *
* Descrição: A função a seguir encontra a mediana entre três números, reescreva essa função *
* para que tenha apenas um return [C Programming: A Modern Approach (1998)]                 *
*                                                                                           *
* double median(double x, double y, double z)                                               *
* {                                                                                         *
*     if (x <= y)                                                                           *
*         if (y <= z) return y;                                                             *
*         else if (x <= z) return z;                                                        *
*         else return x;                                                                    *
*     if (z <= y) return y;                                                                 *
*     if (x <= z) return x;                                                                 *
*     return z;                                                                             *
* }                                                                                         *
********************************************************************************************/


#include <stdio.h>
#include <locale.h>


double median(double x, double y, double z){
    double m = 0;
    if (x <= y) {
        if (y <= z) {
            m = y;
        }else if (x <= z){
            m =  z;
        }else{
            m =  x;
        }
    }
    if (z <= y){
        m = y;
    }
    if (x <= z){
        m = x;
    }
    return m;
}

double definir_valor(double valor){
    printf("Defina o número ")
}

int main (void){
    double x = 7,  y = 2,  z = 11,  m = 0;
    m = median( x,  y,  z);
    printf("%lf", m);
}
