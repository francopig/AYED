#include <stdio.h>
//6. REALIZAR UNA FUNCI�N LLAMADA NEGATIVO, QUE TOMA UN N�MERO ENTERO COMO 
//PAR�METRO, Y DEVUELVE 1 SI ES NEGATIVO O 0 SI NO LO ES.
int negativo (int n);
int main(){
	int numero;
	printf("ingresar un numero para ver si es negativo \n");
	scanf("%i", &numero);
	if (negativo(numero) == 1){
		printf("negativo");
	}else{
		printf("positivo");
	}
	
	return 0;
}

int negativo(int n){
	
	if(n < 0){
		return 1;
	}else{
		return 0;
	}
	
}
