#include <stdio.h>

int main()
{
    int distancia;

    while (scanf("%d", &distancia) == 1)
    {
        double tempo = distancia / 0.5;

        printf("%.0lf minutos\n", tempo);
    }

    return 0;
}
