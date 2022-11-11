#include <stdio.h>

int main(){
    int an, ac, edad;
    printf("Ingrese el año actual: ");
    scanf("%d", &ac);
    printf("Ingrese su año de nacimiento: ");
    scanf("%d", &an);
    edad = ac - an;
    if(edad >= 18){
       printf("Es mayor de edad \n Su edad es: %i\n", edad);
        
    }else{
        printf("Es menor de edad \n Su edad es: %i\n", edad);
        
    }
}