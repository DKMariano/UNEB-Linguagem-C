/***********************************************************************
* Data: 21/09/2025                                                     *
* Exercício: 002 da Aula 3 - Operadores e Controle de Fluxo            *
* Instituição de Ensino: UNEB                                          *
* Disciplina: Linguagem C                                              *
* Professor: José Grimaldo                                             *
* Aluno: D. K. Mariano                                                 *
* Descrição: As maçãs custam R$ 0,30 cada se forem compradas menos do  *
* que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva *
* um programa que leia o número de maçãs compradas, calcule e escreva  *
* o valor total da compra. [Marcelo Cendron, IFC]                      *
***********************************************************************/


#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "Portuguese");

    int qtd_maca = 0;
    float preco_maca = 0;
    float valor_compra = 0;

    printf("Digite a quantidade de maçãs compradas: ");
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
