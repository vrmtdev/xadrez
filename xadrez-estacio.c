#include <stdio.h>

int main()
{
    // Variáveis
    int casas_torre = 5;  // Torre VAR
    int casas_bispo = 5;  // Bispo VAR
    int casas_rainha = 8; // Rainha VAR
    int contador = 0;     // Contador VAR

    printf("MOVIMENTOS DE XADREZ\n\n");

    // Torre, movimento usando "FOR"
    printf("Torre - Movimento horizontal (5 casas para a direita):\n");
    printf("Estrutura de repetição: FOR\n");

    for (int i = 1; i <= casas_torre; i++)
    {
        printf("Casa %d: ", i);
        printf("Direita\n");
    }

    printf("\n");

    // Bispo, movimento usando "WHILE"
    printf("BISPO - Movimento diagonal (5 casas para cima e direita):\n");
    printf("Estrutura de repetição: WHILE\n");

    contador = 1;
    while (contador <= casas_bispo)
    {
        printf("Casa %d: ", contador);
        printf("Cima Direita\n");
        contador++;
    }

    printf("\n");

    // Rainha, movimento usando "DO-WHILE"
    printf("RAINHA - Movimento horizontal (8 casas para a esquerda):\n");
    printf("Estrutura de repetição: DO-WHILE\n");

    contador = 1;
    do
    {
        printf("Casa %d: ", contador);
        printf("Esquerda\n");
        contador++;
    } while (contador <= casas_rainha);

    printf("\nFIM\n");

    return 0;
}
