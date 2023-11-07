#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int produto;

    printf("Escolha uma opção:\n");
    printf("1- Camiseta\n");
    printf("2- Calça\n");
    printf("3- Sapato\n");
    printf("\n");
    scanf("%i", &produto);

    switch (produto)
    {
    case 1:
        printf("1- Camiseta \n");
        printf("Valor: R$ 15.00\n");
        break;
    case 2:
        printf("2- Calça. \n");
        printf("Valor: R$ 45.00\n");
        break;
    case 3:
        printf("3- Sapato. \n");
        printf("Valor: R$ 50.00\n");
        break;

    default:
        printf("Opção Inválida! ");
    }

    return 0;
}
