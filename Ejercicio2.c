//Sacar la hipotenusa de un triangulo restangulo, pidiendo al usuario el valor de los 2 catetos

#include<stdio.h>
#include<math.h>

int main(){
    float h,c1,c2; 
    printf("Imprime los dos catetos: ");
    scanf("%f %f",&c1,&c2);
    h = sqrt(pow(c1,2)+pow(c2,2));
    printf("la hipotenusa del cuadrado es: %.1f",h);



}