#include <stdio.h>

int factorial(int n) {
    printf("Função fatorial foi chamada com %d\n", n);
    if (n <= 1) {  // Base da recursão
        return 1;
    } else {       // Caso recursivo
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    printf("%d! -> %d\n", number, factorial(number));
    return 0;
}
