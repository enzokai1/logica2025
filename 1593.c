#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    char numero[1001];

    scanf("%d", &casos);

    while (casos--)
    {
        scanf("%s", numero);

        int contador = 0;
        int tamanho = strlen(numero);

        while (tamanho > 0)
        {

            int eh_zero = 1;
            for (int i = 0; i < tamanho; i++)
            {
                if (numero[i] != '0')
                {
                    eh_zero = 0;
                    break;
                }
            }
            if (eh_zero)
                break;

            if ((numero[tamanho - 1] - '0') % 2 == 1)
            {
                contador++;
            }

            int resto = 0;
            int novo_tamanho = 0;
            for (int i = 0; i < tamanho; i++)
            {
                int digito = resto * 10 + (numero[i] - '0');
                int resultado = digito / 2;

                if (resultado > 0 || novo_tamanho > 0)
                {
                    numero[novo_tamanho++] = resultado + '0';
                }
                resto = digito % 2;
            }

            if (novo_tamanho == 0)
            {
                numero[0] = '0';
                novo_tamanho = 1;
            }

            tamanho = novo_tamanho;
            numero[tamanho] = '\0';
        }

        printf("%d\n", contador);
    }

    return 0;
}
