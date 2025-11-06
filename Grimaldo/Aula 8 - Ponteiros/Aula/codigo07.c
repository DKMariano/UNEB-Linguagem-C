#include <stdio.h>

void f(int * arr)
{
  printf("%d", arr[0]);
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    f(&arr[0]); // O que acontece se passar
                // &arr[2] ao invés de &arr[0]
    return 0;
}
