/********************************************************************************************
* Data: 16/09/2025                                                                          *
* Exerc�cio: 006 da Aula 5 - Arrays e mais sobre fun��es                                    *
* Institui��o de Ensino: UNEB                                                               *
* Disciplina: Linguagem C                                                                   *
* Professor: Jos� Grimaldo                                                                  *
* Aluno: D. K. Mariano                                                                      *
* Descri��o: A fun��o a seguir encontra a mediana entre tr�s n�meros, reescreva essa fun��o *
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
    printf("Defina o n�mero ")
}

int main (void){
    double x = 7,  y = 2,  z = 11,  m = 0;
    m = median( x,  y,  z);
    printf("%lf", m);
}
