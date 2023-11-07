#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("Escolha um idioma de preferência:\n ");
    printf("1- Inglês.\n ");
    printf("2- Espanhol.\n ");
    printf("3- Francês.\n ");
    printf("\n");
    scanf("%i", &idioma);

    switch (idioma)
    {
    case 1:
        printf("Welcome! ");
        break;
    case 2:
        printf("Bienvenido! ");
        break;
    case 3:
        printf("Bienvenue! ");
        break;

    default:
        printf("Opção inválida! ");
    }

    return 0;
}
