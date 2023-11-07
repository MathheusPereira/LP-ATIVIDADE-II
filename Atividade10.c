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

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    printf("Digite o número para a opção de cálculo: \n");
    printf("1- Soma. \n");
    printf("2- Subtração. \n");
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
        printf("Opção inválida! ");
        break;
    }

    return 0;
}