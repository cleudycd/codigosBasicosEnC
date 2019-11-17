#include<stdio.h>
int main(){
	
	float total_precio,descuento,precio;
	printf("Digite el total de la compra: "); scanf("%f",&total_precio);
	descuento=total_precio *0.15;
	precio=total_precio-descuento;
	printf("El precio es: $%.2f",precio);
	
	return 0;
}
