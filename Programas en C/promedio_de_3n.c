#include <stdio.h>
#include <math.h>

int main(){
    int c1, c2, c3, prom;
    printf("Ingrese el primer numero: ");
    scanf("%d", &c1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &c2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c3);
    prom = (c1+c2+c3)/3;
    printf("El promedio es: %i\n", prom);
}