#include <stdio.h>

int main() {
  int num;
  printf("Digite um numero inteiro:\n");
  scanf("%d", &num);
  
  for(int i = 1; i <= 10; i++) {
    int res = num * i; 
    printf("%dx%d = %d\n", num, i, res);
  }
}
