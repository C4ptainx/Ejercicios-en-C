#include <stdio.h>
#include <math.h>

int main(){
    int b,h,area;
    printf("Ingrese la base: ");
    scanf("%d", &b);
    printf("Ingrese la altura: ");
    scanf("%d", &h);
    if(b<h){
        area = (b*h)/2;
        printf( "El area del triangulo es: %i\n ", area);

    }else{
        printf( "los datos son incorrectos");
    }
    
    
}