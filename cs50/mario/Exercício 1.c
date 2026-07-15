// Exercício 1: Mario (Less)
#include <cs50.h>
#include <stdio.h>
*.c linguist-language=C
  
int main(void)
{
    int altura;
    // Garante que o tamanho inserido esteja entre 1 e 8
    do
    {
        altura = get_int("Tamanho: ");
    }
    while (altura < 1 || altura > 8);

    // Para cada linha da pirâmide
    for (int linha = 1; linha <= altura; linha++)
    {
        // 1. Imprime os espaços em branco para alinhar à direita
        // Quantidade de espaços = altura - linha
        for (int espaco = 0; espaco < altura - linha; espaco++)
        {
            printf(" ");
        }

        // 2. Imprime os caracteres '#'
        // Quantidade de '#' = valor atual da linha
        for (int j = 0; j < linha; j++)
        {
            printf("#");
        }

        // 3. Pula para a próxima linha
        printf("\n");
    }
}
