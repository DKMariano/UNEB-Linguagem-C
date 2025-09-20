/******************************************************************************
* Data: 20/09/2025                                                            *
* Exerc�cio: 001 da Aula 3 - Operadores e Controle de Fluxo                   *
* Institui��o de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: Jos� Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descri��o: Fazer um programa em C que pergunta um valor em metros e imprime *
* o correspondente em dec�metros, cent�metros e mil�metros.                   *
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
    printf("    - %d dec�metros (dm)\n", decimetros);
    printf("    - %d cent�metros (cm)\n", centimetros);
    printf("    - %d mil�metros (mm)\n", milimetros);

    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
