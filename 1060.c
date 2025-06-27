#include <stdio.h>
int main()
{
    double numeros;
    int positivos;
    positivos = 0;
    for (int i = 0; i < 6; i++){
        scanf("%lf", &numeros);
        if (numeros > 0)
        ++positivos;
    }
    printf("%d valores positivos\n", positivos);


return 0;
}
