#include <stdio.h>
#define PI 3.14159
// Lucas Vinicius de Souza

int main() 
{
    double R, volume;
    scanf("%lf", &R);

    volume = (4.0 / 3.0) * PI * R * R * R;
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}