#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Digite a temperatura em graus: ");
    scanf("%i", &temperatura);

    if (temperatura > 25)
    {
        printf("O clima esté ensolarado! ");
    }
    else if (temperatura >= 15 && temperatura <= 25)
    {
        printf("O clima esté nublado! ");
    }
    else
    {
        printf("O clima está chuvoso! ");
    }

    return 0;
}