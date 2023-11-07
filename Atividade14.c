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

        printf("Digite os n�meros inteiros:");
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
        printf("Quantidade de n�meros pares: %d\n", contadorPares);
        printf("Media aritm�tica dos n�meros pares: %f\n", mediaPares);
    }
    else
    {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (contadorImpares > 0)
    {
        float mediaImpares = (float)somaImpares / contadorImpares;
        printf("Quantidade de n�meros �mpares: %d\n", contadorImpares);
        printf("M�dia aritm�tica dos n�meros �mpares: %f\n", mediaImpares);
    }
    else
    {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    return 0;
}