#include <stdio.h>
 
int main() {
    int nfuncionario;
    float vporhora, nhoras, salario;
scanf("%d", &nfuncionario);
scanf("%f", &nhoras);
scanf("%f", &vporhora);
salario = (nhoras*vporhora);
printf("NUMBER = %d\nSALARY = U$ %.2f\n", nfuncionario, salario);

    return 0;
}
