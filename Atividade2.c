#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float compra;
    char diadaSemana;
    float valordaCompra;
    float desconto;

    printf("1 - Dias Úteis da semana. \n");
    printf("2 - Fim de semana. \n");
    printf("\n");
    scanf("%i", &diadaSemana);

    printf("\nDigite o valor da compra: R$ ");
    scanf("%f", &compra);

    if (compra > 100)
    {
        if (diadaSemana == 1 || diadaSemana == 1)
        {
            desconto = compra * 0.10;
        } 
        else if (diadaSemana == 2 || diadaSemana == 2) 
        {
           desconto = compra * 0.15;
        }

    }

    valordaCompra = compra - desconto;

    printf("Valor da compra: R$ %.2f\n", compra);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor total com desconto: R$ %.2f\n", valordaCompra);
    


    return 0;
}