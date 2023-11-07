#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número inteiro: : ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Contagem regressiva a partir de %d:\n", numero);

        while (numero >= 0)
        {
            switch (numero)
            {
            case 0:
                printf("\n");
                printf("ZERO");
                break;
             default:
                printf("%d\n", numero);
                break;
            }
            numero--;
        }
    }

    return 0;
}