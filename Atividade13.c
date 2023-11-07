#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num1;
int num2;

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d É o maior número.\n", num1);
        printf("%d É o menor número.\n", num2);
    }
    else if (num2 > num1)
    {
        printf("%d É o maior número.\n", num2);
        printf("%d É o menor número.\n", num1);
    }
    else
    {
        printf("Os números são iguais.\n");
    }

    return 0;
}
