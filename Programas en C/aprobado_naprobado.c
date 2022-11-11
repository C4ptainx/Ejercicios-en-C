#include <stdio.h>
#include <math.h>

int main(){
    int c1, c2, c3, cf;
    printf("Ingrese la primera calificacion: ");
    scanf("%d", &c1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%d", &c2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%d", &c3);
    cf = (c1+c2+c3)/3;
    if(cf > 5){
        printf("aprobado ");
    }else{
        printf("reprobado");
    }
}