#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int opcao;
    int resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &segundoNumero);

    printf("Digite o n�mero para a op��o de c�lculo: \n");
    printf("1- Soma. \n");
    printf("2- Subtra��o. \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = primeiroNumero + segundoNumero;
        printf("Resultado: %d", resultado);
        break;
    case 2:
        resultado = primeiroNumero - segundoNumero;
        printf("Resultado: %d", resultado);
        break;

     default:
        printf("Op��o inv�lida! ");
        break;
    }

    return 0;
}