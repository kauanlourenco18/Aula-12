#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];       
    char sobrenome[50];  

    printf("Digite o seu nome: ");
    scanf("%49s", nome); 
    printf("Nome: %s\n", nome);

    printf("Digite o seu sobrenome: ");
    scanf("%49s", sobrenome);  
    printf("Sobrenome: %s\n", sobrenome);

    strcat(nome, " ");       
    strcat(nome, sobrenome); 

    printf("Nome Completo: %s\n", nome);

    return 0;
}
