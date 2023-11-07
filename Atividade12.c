#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidadeNotas;
    float nota = 0;
    int somaNotas = 0;
    float media = 0;


    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    for ( i = 0; i < quantidadeNotas; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    media = somaNotas / quantidadeNotas;

    printf("A média das notas é: %.2f", media);

    return 0;
}
