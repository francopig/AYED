#include <stdio.h>

//16. CREAR UNA FUNCI�N �ESCRIBIRTABLAMULTIPLICAR�, QUE RECIBA COMO PAR�METRO UN 
//N�MERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE N�MERO (POR EJEMPLO,
//PARA EL 3 DEBER� LLEGAR DESDE 3X0=0 HASTA 3X10=30)

void ESCRIBIRTABLAMULTIPLICAR (int n);
int main(){
	int numero;
	
	printf("Ingresar un numero para ver su tabla: \n");
	scanf("%i", &numero);
	ESCRIBIRTABLAMULTIPLICAR(numero);
	
	return 0; 
}

void ESCRIBIRTABLAMULTIPLICAR (int n){
	int i;
	
	for(i=1; i <= 10; i++){	
		printf("%i por %i es igual a: %i \n",n,i,(n*i));
	}
	
	
}
