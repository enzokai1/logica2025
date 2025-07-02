#include <stdio.h>
#include <math.h>

int main()
{
    double R, volume, pi;
    pi = 3.14159;
    scanf("%lf", &R);
    volume = (4.0 / 3) * pi * R * R * R;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}
