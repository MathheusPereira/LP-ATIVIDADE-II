#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char acesso[200];
char acessoCorreto[200] = "Senai";

int main()
{

    do
    {
        printf("Digite o código de acesso: ");
        scanf("%s", &acesso);
        printf("\n");

        if (strcmp(acessoCorreto, acesso) == 0)
        {
            printf("Acesso liberado!\n ");
        }

    } while (strcmp(acessoCorreto, acesso) != 0);

    return 0;
}
