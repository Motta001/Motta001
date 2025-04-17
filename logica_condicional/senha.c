#include <stdio.h> 
#include <string.h> 

int main() [
    char senha[10];
    const char SENHA_CORRETA[] = "1234";

    printf("Digite a senha: ");
    scanf("%s", senha); 

    while (strcmp(senha, SENHA_CORRETA) != 0) {
        prinft("Senha incorreta. Tente novamente: ");
        scanf("%s", senha);
    }

    printf("Senha correta! Acesso permitido.\n");

    return 0;
]