#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere e pressione Enter: ");
    c = getchar();

    // Verifica se o caractere lido é igual a EOF
    if (c == EOF) {
        printf("A expressão getchar() != EOF é falsa. Resultado: 0\n");
    } else {
        printf("A expressão getchar() != EOF é verdadeira. Resultado: 1\n");
    }

    return 0;
}
