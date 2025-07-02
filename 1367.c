#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int problemas_resolvidos = 0;
        int tempo_total_penalidade = 0;
        int penalidades_incorretas[26] = {0};

        for (int i = 0; i < n; i++)
        {
            char id_problema;
            int tempo;
            char julgamento[15];
            scanf(" %c %d %s", &id_problema, &tempo, julgamento);

            int indice_problema = id_problema - 'A';

            if (strcmp(julgamento, "correct") == 0)
            {
                problemas_resolvidos++;
                tempo_total_penalidade += tempo;
                tempo_total_penalidade += penalidades_incorretas[indice_problema];
            }
            else
            {
                penalidades_incorretas[indice_problema] += 20;
            }
        }
        printf("%d %d\n", problemas_resolvidos, tempo_total_penalidade);
    }

    return 0;
}
