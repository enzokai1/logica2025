#include <stdio.h>
 
int main() {
    char nome[10];
    double salario, comissao, vendastotal, total;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendastotal);
    comissao = vendastotal*0.15;
    total = (salario + comissao);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
