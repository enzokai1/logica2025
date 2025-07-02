#include <stdio.h>
int main()
{
    int pares, numeros;
    pares = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros);
        if (numeros % 2 == 0)
            ++pares;
    }
    printf("%d valores pares\n", pares);
    return 0;
}
