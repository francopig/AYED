#include <stdio.h>

//22-CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A 
//LOS QUE SE LES PAGA 250 PESOS POR HORA SI �STAS NO SUPERAN LAS 35 HORAS. CADA 
//HORA POR ENCIMA DE 35 SE CONSIDERAR� EXTRA Y SE PAGA A 85 PESOS.
//EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE 
//DEBE PAGAR.
//ADEM�S EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES 
//AS� EL PROGRAMA SE VUELVE A REPETIR

int main (){
	int continuar,horas,horasNormales,horasExtras,excedente,salario;
	const int VALORNORMALES = 250;
	const int VALOREXTRAS = 85;
	
	printf("Desea procesar datos? 1=si 2=no : \n");
	scanf("%i", &continuar);
	while (continuar == 1){
		printf("ingresar horas trabajadas: \n");
		scanf("%i", &horas);
		if (horas > 35){
			horasExtras = horas - 35;
			horasNormales = 35;
			salario = (horasNormales * VALORNORMALES) + (horasExtras * VALOREXTRAS);
		}else{
			salario = horas * VALORNORMALES;
		}

		printf("Salario: $%i \n",salario);
				
    	printf("Desea procesar datos? 1=si 2=no : ");
	    scanf("%i", &continuar);		
	}
	
	return 0;
}
