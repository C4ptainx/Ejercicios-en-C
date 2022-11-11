#include <stdio.h>
#include <math.h>

int main(){
    float pi=3.14159265;
    float r,area;
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    area =  pi * r*r;
    printf( "El area del cilindrto es: %.2f ", area);
}