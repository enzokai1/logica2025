#include <stdio.h>
int main()
{
    int numeros, pares, impares, positivos, negativos;
    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros);
        if (numeros > 0)
            ++positivos;
        else if (numeros < 0)
            ++negativos;
        if (numeros % 2 == 0)
            ++pares;
        else
            ++impares;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
    return 0;
}
