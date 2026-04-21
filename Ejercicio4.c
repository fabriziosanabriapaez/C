#include<stdio.h>

int main(){
    
    float total,descuento,precio;
    
    printf("Digite el total de la compra: ");
    scanf("%f",&total);

    descuento = total * 0.15;
    precio = total - descuento; 
    
    printf("Debera de pagar con descuento: %.1f",precio);

    return 0;
}