#include <stdio.h>
#include <string.h>

int main() {
    char senhac[] = "azimo";  
    char senha[20];
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%19s", senha);  

        if (strcmp(senha, senhac) == 0) { 
            printf("Seja bem vindo!\n");
            return 0;  
        } else {
            tentativas--;  
            if (tentativas == 0) {
                printf("Tente novamente mais tarde.\n");
            } else {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
        }
    }

    return 0;
}
