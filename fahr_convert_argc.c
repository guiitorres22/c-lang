#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int celsius; // temperatura em Celsius
    int fahr; // temperatura em Fahrenheit

    if (argc != 2) // verifica se o número de argumentos é válido
    {
        printf("Uso: %s <temperatura em Celsius>\n", argv[0]); // mostra a forma correta de usar o programa
        return 1; // encerra o programa com código de erro
    }

    celsius = atoi(argv[1]); // converte o argumento para inteiro
    fahr = (9 * celsius) / 5 + 32; // calcula a temperatura em Fahrenheit
    printf("%d C = %d F\n", celsius, fahr); // mostra o resultado na tela
    return 0; // encerra o programa com sucesso
}
