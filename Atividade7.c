#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha uma opção: \n");
    printf("\n");
    printf("1- Novo jogo. \n");
    printf("2- Carregar jogo. \n");
    printf("3- Configurações. \n");
    printf("\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciar um novo jogo! ");
        break;
    case 2:
        printf("Carregar um novo jogo! ");
        break;
    case 3:
        printf("Abrir as configurações! ");
        break;

    default:
        printf("Opção inválida! ");
    }

    return 0;
}
