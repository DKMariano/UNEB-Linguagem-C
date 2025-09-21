/***********************************************************************
* Data: 21/09/2025                                                     *
* Exerc�cio: 002 da Aula 3 - Operadores e Controle de Fluxo            *
* Institui��o de Ensino: UNEB                                          *
* Disciplina: Linguagem C                                              *
* Professor: Jos� Grimaldo                                             *
* Aluno: D. K. Mariano                                                 *
* Descri��o: As ma��s custam R$ 0,30 cada se forem compradas menos do  *
* que uma d�zia, e R$ 0,25 se forem compradas pelo menos doze. Escreva *
* um programa que leia o n�mero de ma��s compradas, calcule e escreva  *
* o valor total da compra. [Marcelo Cendron, IFC]                      *
***********************************************************************/


#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int qtd_maca = 0;
    float preco_maca = 0;
    float valor_compra = 0;

    printf("Digite a quantidade de ma��s compradas: ");
    scanf("%d", &qtd_maca);

    if (qtd_maca <12){
        preco_maca = 0.30;
        valor_compra = qtd_maca * preco_maca;
    } else{
        preco_maca = 0.25;
        valor_compra = qtd_maca * preco_maca;
    }

    printf("\nTotal da compra: R$ %.2f", valor_compra);


    printf("\n\nPressione Enter para sair...");
    getchar();
    return 0;


}
