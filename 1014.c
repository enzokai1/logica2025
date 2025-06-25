#include <stdio.h>

int main() {
    int distancia;
    double combustivel;
    
    while (scanf("%d %lf", &distancia, &combustivel) == 2) {
        double consumo = distancia / combustivel;
        printf("%.3lf km/l\n", consumo);
    }
    
    return 0;
}
