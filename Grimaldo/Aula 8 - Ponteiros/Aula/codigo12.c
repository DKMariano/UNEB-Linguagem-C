#include <stdio.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

int main(void){
    setlocale(LC_ALL, "Portuguese");


    Pessoa p1 ={"José", 67};

    Pessoa *ptr = &p1;

    printf("ptr->nome: %s \n", ptr->nome);
    printf("ptr->idade: %d \n", ptr->idade);

    printf("\n\n(*ptr).nome: %s \n", (*ptr).nome);
    printf("(*ptr).idade: %d \n", (*ptr).idade);


    return 0;
}

