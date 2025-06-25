#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
       
        if (a > b) { double t = a; a = b; b = t; }
        if (b > c) { double t = b; b = c; c = t; }
        if (a > b) { double t = a; a = b; b = t; }
        
       
        double p = (a + b + c) / 2;
        
       
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        
      
        double R = (a * b * c) / (4 * area);
        
        
        double r = area / p;
        
        
        double circulo_grande = 3.1415926535897 * R * R;
        double circulo_pequeno = 3.1415926535897 * r * r;
        
        
        double s = circulo_grande - area;  
        double v = area - circulo_pequeno; 
        
        printf("%.4lf %.4lf %.4lf\n", s, v, circulo_pequeno);
    }
    
    return 0;
}
