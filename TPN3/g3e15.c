#include <stdio.h>

//15. CREAR UNA FUNCI�N QUE RECIBA UN N�MERO Y MUESTRE EN PANTALLA EL PER�METRO Y 
//LA SUPERFICIE DE UN CUADRADO QUE TENGA COMO LADO EL N�MERO QUE SE HA INDICADO 
//COMO PAR�METRO
void funcion (int n);
int main(){
	int lado;
	
	printf("ingresar el valor de un lado del cuadrado: \n");
	scanf("%i", &lado);
	funcion(lado);
	
	return 0;
}

void funcion (int n){
	
	printf("el perimetro es: %i \n", n+n+n+n);
	printf("la superficie es: %i \n", n*n);
}
