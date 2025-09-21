/******************************************************************************
* Data: 20/09/2025                                                            *
* Exerc�cio: 001 da Aula 3 - Operadores e Controle de Fluxo                   *
* Institui��o de Ensino: UNEB                                                 *
* Disciplina: Linguagem C                                                     *
* Professor: Jos� Grimaldo                                                    *
* Aluno: D. K. Mariano                                                        *
* Descri��o: Fa�a um programa que implemente um menu onde o usur�rio dever�   *
* selecionar 1 ou 0. Caso seja entrado um n�mero diferente, o programa dever� *
* solicitar uma nova op��o. [Marcelo Cendron, IFC]                            *
******************************************************************************/


#include <stdio.h>
#include <locale.h>


void imprimir_menu(){
    printf("\n=== MENU ===");
    printf("\n0- Alguma coisa");
    printf("\n1- Outra coisa");
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    imprimir_menu();

    int opcao = -1;

    do{
        printf("\n\n\nEscolha uma op�ao: ");
        scanf("%d", &opcao);
        if(opcao != 0 && opcao !=1){
            printf("Erro: Op��o Inv�lida!");
        }


    }while (opcao != 0 && opcao !=1);

    printf("\nPar�bens, voc� digitou uma op��o v�lida!");


    printf("\n\nPressione Enter para sair...");
    getchar();

    return 0;
}
