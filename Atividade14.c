#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    
    int numero;
    int par;
    int impar;
    float somaPar = 0;
    float somaImpar = 0;
    int contaPar = 0;
    int contaImpar = 0;
    float mediaPar = 0;
    float mediaImpar = 0;

    do
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        if (numero > 0)
        {

            if (numero % 2 == 0)
            {

                contaPar++;
                somaPar += +numero;
            }
            else
            {
                contaImpar++;
                somaImpar += +numero;
            }
        }
    } while (numero > 0);

    mediaPar = (float)somaPar / contaPar;
    mediaImpar = (float)somaImpar / contaImpar;

    printf("\n");
    printf("Quantidade de números Pares: %i\n", contaPar);
    printf("Quantidade de números Ímpares: %i\n", contaImpar);
    printf("Media de número Par : %.2f\n", mediaPar);
    printf("Media de número ímpar %.2f: \n", mediaImpar);

    return 0;
}
