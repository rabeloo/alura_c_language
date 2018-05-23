#include <stdio.h>
// Usando for
/*int main() {*/
  /*for(int count = 1; count <= 100; count++) {*/
    /*printf("%d\n", count);*/
  /*}*/
/*}*/

// Usando while
int main() {
  int i = 1;
  int soma;
  while(i <= 100) {
    printf("%d\n", i);
    soma = soma + i;
    i++;
  }
  printf("A soma de todos os número é: %d\n", soma);
}
