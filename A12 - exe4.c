#include <stdio.h>
#include <string.h>

int main() {
  char palavra[6];
  char * posicao;
  char letra;
  int tentativas = 2;

 printf("Digite uma palavra de até 5 letras: ");
 scanf("%5s", palavra);
 printf("Palavra digitada: %5s", palavra);

do { 
  
   printf("\nDigite uma letra: ");
   scanf(" %c", &letra);
  
  posicao = strchr(palavra, letra);
  
  if( posicao != NULL ) { 
    printf("Letra encontada");
  } else {
    printf("Nao encontrada!, tenattivas: %d", tentativas);
    tentativas--;
    }
  } while (tentativas >= 0);
 
  return 0;
}  