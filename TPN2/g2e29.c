#include <stdio.h>
//29-ESCRIBIR UN ALGORITMO QUE PERMITA EFECTUAR EL C�LCULO DEL �REA DE UN 
//CUADRADO, UN C�RCULO, UN TRI�NGULO EQUIL�TERO SEG�N LA OPCI�N SELECCIONADA 
//POR EL USUARIO A TRAV�S DE UN MEN�. CREAR DOS VERSIONES DEL ALGORITMO: UNA 
//CON SI/SINO Y LA OTRA CON SEG�N.

int main(){
	
	int area,respuesta,base,altura,radio;
	const PI=3.1415926535;
	printf("calcular area de: 1=cuadradro 2=circulo 3=triangulo eq \n");
	scanf("%i",&respuesta);
	
//	if(respuesta == 1){
//		printf("Ingresar base y altura: \n");
//		scanf("%i %i", &base, &altura);
//		printf("El area es de: %i", base*altura);
//	} else if(respuesta == 2){
//		printf("ingresar radio: \n");
//		scanf("%i", &radio);
//		printf("el area del circulo es de: %i \n", PI*radio*radio);
//	}else {
//		printf("Ingresar base y altura: \n");
//		scanf("%i %i", &base, &altura);
//		printf("el area del triangulo es de: %i \n", (base*altura)/2);
//	}
	
	//ahora con switch
	switch(respuesta){
		case 1:
				printf("Ingresar base y altura: \n");
				scanf("%i %i", &base, &altura);
				printf("El area es de: %i", base*altura);
				break;
		
		case 2:
				printf("ingresar radio: \n");
				scanf("%i", &radio);
				printf("el area del circulo es de: %i \n", PI*radio*radio);
				break;
				
		case 3:
				printf("Ingresar base y altura: \n");
				scanf("%i %i", &base, &altura);
				printf("el area del triangulo es de: %i \n", (base*altura)/2);
				break;
	}
	
	return 0;
}
