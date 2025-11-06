/******************************************************************************
* Data: 20/09/2025                                                            *
* Exercício: 001 da Aula 3 - Operadores e Controle de Fluxo                   *
* Instituição de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: José Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descrição: Fazer um programa em C que pergunta um valor em metros e imprime *
* o correspondente em decímetros, centímetros e milímetros.                   *
******************************************************************************/


#include <stdio.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "Portuguese");

    int metros = 0;
    printf("Digite um valor em metros: ");
    scanf("%d", &metros);
    getchar(); // limpa o '\n' que o scanf deixa no buffer

    int decimetros = metros * 10;
    int centimetros = metros * 100;
    int milimetros = metros * 1000;


    printf("\n=== Conversor de Medidas ===\n");
    printf("%d metro(s) corresponde(m) a:\n", metros);
    printf("    - %d decímetros (dm)\n", decimetros);
    printf("    - %d centímetros (cm)\n", centimetros);
    printf("    - %d milímetros (mm)\n", milimetros);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
