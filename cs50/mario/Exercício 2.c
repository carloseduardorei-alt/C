// Exercício 1: Mario (More)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    do
    {
        altura = get_int("Tamanho: ");
    }
    while (altura < 1 || altura > 8);

    for (int linha = 1; linha <= altura; linha++)
    {
        // 1. Espaços da esquerda (alinhamento)
        for (int espaco = 0; espaco < altura - linha; espaco++)
        {
            printf(" ");
        }

        // 2. Primeira pirâmide (esquerda)
        for (int j = 0; j < linha; j++)
        {
            printf("#");
        }

        // 3. Espaço duplo central
        printf("  ");

        // 4. Segunda pirâmide (direita)
        for (int j = 0; j < linha; j++)
        {
            printf("#");
        }

        // 5. Salta de linha
        printf("\n");
    }
}
