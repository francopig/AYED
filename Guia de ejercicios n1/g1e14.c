#include <stdio.h>

//14-DESARROLLE UN ALGORITMO PARA CALCULAR EL IMPORTE DE UNA VENTA EN UN 
//SUPERMERCADO. EL USUARIO DEBE INGRESAR EL NOMBRE DEL PRODUCTO, EL PRECIO POR 
//UNIDAD Y EL N�MERO DE UNIDADES. EL PROGRAMA MOSTRAR� POR PANTALLA EL 
//NOMBRE DEL PRODUCTO, EL N�MERO DE UNIDADES VENDIDAS Y EL PRECIO TOTAL.

int main () {
	int precio,cantidad,total;
	char nombre[10];
	
	printf("Ingrese nombre del producto: \n");
	scanf("%s", &nombre);
	printf("Ingrese precio del producto: \n");
	scanf("%i", &precio);
	printf("Ingrese cantidad de unidades: \n");
	scanf("%i", &cantidad);
	
	total = precio * cantidad;
	printf("El total a pagar es de $:%i  \n", total);
	return 0;
}
