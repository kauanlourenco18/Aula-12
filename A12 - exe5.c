#include <stdio.h>
#include <string.h>

int main() {
  char senha[20];
  printf("Digite a senha: ");
  scanf("%19s", senha);

  int tamanho = strlen(senha);

  printf("Tamanho: %d\n", tamanho);

if(tamanho < 8){
    printf("Erro na senha");
}else{
    printf("Senha conforme");
}

  return 0;
}