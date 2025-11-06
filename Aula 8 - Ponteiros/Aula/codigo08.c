#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[0]; // Ponteiro para a primeira posição
    int *ptr2 = arr; // Ponteiro para a primeira posição

    printf("ptr1: %d \n", *ptr1);
    printf("ptr2: %d \n", *ptr2);
}
