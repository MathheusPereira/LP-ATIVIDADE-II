#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int div = 0;
    int i;
    int x;

    printf("Digite um valor: ");
    scanf("%d", &x);

    for (i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            div++;
        }
    }
    if (div == 1)
    {
        printf("N�mero primo! ");
    }
    else
    {
        printf("N�o � primo! ");
    }

    return 0;
}