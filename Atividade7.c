#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha uma op��o: \n");
    printf("\n");
    printf("1- Novo jogo. \n");
    printf("2- Carregar jogo. \n");
    printf("3- Configura��es. \n");
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
        printf("Abrir as configura��es! ");
        break;

    default:
        printf("Op��o inv�lida! ");
    }

    return 0;
}
