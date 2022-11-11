#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    if(n1 = 0){
        printf("n1 es igual a cero ");
    }else if(n2 = 0){
        printf("n2 es igual a cero ");
    }else if(n1 > n2){
        printf("n1 es mayor que n2 ");
    }else{
        printf("n1 es menor que n2 ");
    }
}