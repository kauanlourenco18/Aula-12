#include <stdio.h>
#include <string.h>

int main() {
  char nome[20];
  char sobrenome[10];

printf("Digite o seu nome: ");
scanf("%9s", nome);
printf("Nome: %s\n", nome);

printf("Digite o seu sobrenome: ");
scanf("%9s", sobrenome);
printf("Sobrenome: %s\n", sobrenome);

  strcat(nome , sobrenome);
 printf("Nome Completo: %s\n", nome);

  return 0;
}