#include <stdio.h>
#include <math.h>

int main(){
    float pi=3.14159265;
    float r, h, area;
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    printf("Ingrese la altura: ");
    scanf("%f", &h);
    area =  2 * pi * r * (r+h);
    printf( "El area del cilindrto es: %.2f ", area);
}