#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num1;
int num2;

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d � o maior n�mero.\n", num1);
        printf("%d � o menor n�mero.\n", num2);
    }
    else if (num2 > num1)
    {
        printf("%d � o maior n�mero.\n", num2);
        printf("%d � o menor n�mero.\n", num1);
    }
    else
    {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}
