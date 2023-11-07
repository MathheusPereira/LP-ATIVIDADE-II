#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("Acesso Permitido! ");
    }
    else
    {
        printf("Acesso Negado! ");
    }
    

    return 0;
}