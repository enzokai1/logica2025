#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    char linha[201];
    int frequencia[26];
    int i, j;
    int maior_frequencia;

    scanf("%d", &n);

    getchar();

    for (i = 0; i < n; i++)
    {

        fgets(linha, sizeof(linha), stdin);

        for (j = 0; j < 26; j++)
        {
            frequencia[j] = 0;
        }

        for (j = 0; j < strlen(linha); j++)
        {

            if (isalpha(linha[j]))
            {

                int indice = tolower(linha[j]) - 'a';
                frequencia[indice]++;
            }
        }

        maior_frequencia = 0;

        for (j = 0; j < 26; j++)
        {
            if (frequencia[j] > maior_frequencia)
            {
                maior_frequencia = frequencia[j];
            }
        }

        for (j = 0; j < 26; j++)
        {
            if (frequencia[j] == maior_frequencia && maior_frequencia > 0)
            {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
