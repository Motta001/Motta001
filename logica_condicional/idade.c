#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Voce e uma crianca.\n");
    } else if (idade >= 12 && idade <= 17) {
        printf("Voce e um adolescente.\n");
    } else { 
        printf("Voce e um adulto.\n");
    }
    
    return 0;
}