#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    int contadorPares = 0;
    int contadorImpares = 0;
    int somaImpares = 0;
    int somaPares = 0;

    while (1)
    {

        printf("Digite os números inteiros:");
        scanf("%d", &numero);

        if (numero < 0)
        {
            break;
        }

        if (numero % 2 == 0)
        {
            somaPares += numero;
            contadorPares++;
        }
        else
        {
            somaImpares += numero;
            contadorImpares++;
        }
    }

    if (contadorPares > 0)
    {
        float mediaPares = (float)somaPares / contadorPares;
        printf("Quantidade de números pares: %d\n", contadorPares);
        printf("Media aritmética dos números pares: %f\n", mediaPares);
    }
    else
    {
        printf("Nenhum número par foi digitado.\n");
    }

    if (contadorImpares > 0)
    {
        float mediaImpares = (float)somaImpares / contadorImpares;
        printf("Quantidade de números ímpares: %d\n", contadorImpares);
        printf("Média aritmética dos números ímpares: %f\n", mediaImpares);
    }
    else
    {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}