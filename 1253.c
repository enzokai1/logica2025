#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char texto_cifrado[51];
    int deslocamento;

    scanf("%d", &n);

    for (int caso = 0; caso < n; caso++)
    {

        scanf("%s", texto_cifrado);

        scanf("%d", &deslocamento);

        int tamanho = strlen(texto_cifrado);

        for (int i = 0; i < tamanho; i++)
        {
            char letra_atual = texto_cifrado[i];
            char letra_decodificada;

            letra_decodificada = letra_atual - deslocamento;

            if (letra_decodificada < 'A')
            {

                letra_decodificada = letra_decodificada + 26;
            }

            texto_cifrado[i] = letra_decodificada;
        }

        printf("%s\n", texto_cifrado);
    }

    return 0;
}
