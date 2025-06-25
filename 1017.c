#include <stdio.h>

int main() {
    float tempo, velocidade;
    float distancia, litros;
    
    scanf("%f", &tempo);
    scanf("%f", &velocidade);
    
    distancia = tempo * velocidade;
    litros = distancia / 12.0;
    
    printf("%.3f\n", litros);
    
    return 0;
}
