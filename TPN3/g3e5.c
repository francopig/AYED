#include <stdio.h>
//5. REALIZAR FUNCI�N QUE TOME DOS N�MEROS REALES COMO PAR�METROS Y DEVUELVA UN 
//N�MERO REAL QUE SER�A LA MEDIA DE LOS DOS N�MEROS.

float media(float r1, float r2);

int main(){
	float real1, real2;
	
	printf("Ingrese dos reales para ver la media: \n");
	scanf("%f %f", &real1, &real2);
	
	printf("la media es de: %.2f", media(real1, real2));
	
	return 0;
}

float media(float r1, float r2){
	
	return (r1+r2)/2;
}
