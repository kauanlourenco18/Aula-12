#include <stdio.h>

int main() {
    char nome[30];

    printf("Digite o nome: ");
    scanf("%29s", nome);

    printf("Nome: %s\n", nome);

for(int i = 0; i < 29; i++) {
printf("* %c ", nome[i]);

if(nome[i] == '\0'){
    break;
}

}
    printf("*\n");
    return 0;
}
