#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {

        int maiorAB = (a + b + abs(a - b)) / 2;

        int maior = (maiorAB + c + abs(maiorAB - c)) / 2;

        printf("%d eh o maior\n", maior);
    }

    return 0;
}
