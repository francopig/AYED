#include <stdio.h>

//13. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS N�MEROS ENTEROS 
//PARES COMPRENDIDOS ENTRE EL 1 Y EL 200, IMPRIMA LOS N�MEROS Y SU SUMATORIA.
//EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCI�N PARA DETERMINAR SI EL N�MERO ES PAR 
//O NO

int paridad (int numero);
int main(){
	int i;
	int sumatoria = 0;
	for(i=1; i <= 200; i++){
		if (paridad(i) == 1){ //pregunto si es par
			printf("%i \n", i);
			sumatoria += i;
		}
	}
	printf("sumatoria: %i ", sumatoria);	
	
	return 0;
}

int paridad (int numero){ //devuelve 1= par | 0=impar

	if((numero%2) == 0){
		return 1;
	}else{
		return 0;
	}
}
