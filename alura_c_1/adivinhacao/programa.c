// Headers files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Inteiro
/*short = 2 bytes (16 bits)*/
/*int = 4 bytes (32 bits) 2 ** 32 */
/*long = 8 bytes (64 bits) 2 ** 64*/
// Flutuant point
/*double 8 bytes (64 bits)*/
/*float = 4 bytes (32 bits)*/

#define NUMERO_DE_TENTATIVAS 5

int main() {
  printf("************************************\n");
  printf("* Bem vindo ao jogo de adivinhação *\n");
  printf("************************************\n");

  int segundos = time(0); // Retorna os segundos desde 1/1/1970
  srand(segundos); // Altera formula matematica que gera os numeros randomicos
  int numerogrande = rand(); // Funcão rand não gera numero randomicos de vdd, é necessario passar um numero aleatorio para a funcao que gera os numeros
  int numeroSecreto = numerogrande % 100;

  int chute;
  int tentativa = 1;
  double pontos = 1000;

  while(1) {
    printf("Tentativa %d\n", tentativa);
    printf("Qual é seu chute?\n");

    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute < 0){
      printf("Numero não pode ser menor que zero.\n");
        continue;
    }

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    if(acertou) {
      printf(" **** Acerto miseravi! **** \n");

      break;
    }
    else if(maior)  {
        printf("Seu chute foi maior que o numero secreto\n");
    }
    else {
      printf("Seu numero foi menor que o numero secreto\n");
    }

    tentativa++;

    // Casting: Devolve valor absoluto - Converter uma variavel em outro tipo. No exemplo abaixo convertemos um inteiro para double
    // funçao abs troca o sinal 
    double pontosperdidos = abs(chute - numeroSecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }
  printf("Você acertou em %d tentativas!\n", tentativa);
  printf("Total de pontos: %.1f\n", pontos);
} // end main()
