#include <stdio.h>

// o parâmetro vetor agora
// é apenas um ponteiro
int f(int * vetor, int tam)
{
  int soma = 0;
  for (int i = 0; i < tam; i++)
  {
    printf("%d \n", *vetor++);
    soma += *vetor;
  }
  return soma;
}

int main(void)
{
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x = f(arr, 10);

  return 0;
}
