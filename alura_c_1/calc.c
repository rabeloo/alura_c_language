#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Escolha uma operação:\n");
  printf("1 = Soma\n");
  printf("2 = Subtração\n");
  printf("3 = Divisão\n");
  printf("1 = Multiplicação\n");
 
  int operacao;
  scanf("%d", &operacao);

  int nr1 = 0;
  printf("Digite o primeiro numero:\n");
  scanf("%d", &nr1);

  int nr2 = 0;
  printf("Digite o segundo numero:\n");
  scanf("%d", &nr2);

  int resultado = 0;

  if(operacao == 1) {
    resultado = nr1 + nr2;
  }
  else if(operacao == 2) {
    resultado = nr1 - nr2;
  }
  else if(operacao == 3) {
    resultado = nr1 / (float)nr2;
  }
  else if(operacao == 4) {
   resultado = nr1 * (float)nr2;
  }
  else {
  }

  printf("O resultado é: %d\n", resultado);
}
