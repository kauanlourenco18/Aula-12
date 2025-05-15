#include <stdio.h>

int diferente(char senha[], char resposta[]);

int main() {
char senhac[6] = {'a', 'z', 'i', 'm', 'o'};
char senha[6];

for (int tentativas = 2; tentativas >= 0; tentativas--) {
    
    printf("Digite a senha: ");
    scanf("%5s", senha);
    getchar();
    
    if (!diferente(senha, senhac)) {
        printf("Seja bem vindo!\n"); 
        break;
    } else {
        printf("Senha errada. Tentativas restantes: %d\n", tentativas);
    } 
    
    if(tentativas == 0){
        printf("Tente novamente mais tarde\n");
    }
}


    return 0;
}

int diferente(char senha[], char resposta[]){
    int i = 0;
    while(senha[i] != '\0' && resposta[i] != '\0'){
        if(senha[i] != resposta[i]){return 1;}
        i++;
    }
    
    if(senha[i] == '\0' && resposta[i] == '\0'){
        return 0;
    }
    
    return 1;
}