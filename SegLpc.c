#include<stdio.h>
#include<stdlib.h>//libreria para usar funciones de memoria dinamica

/*SegLpc(float A[][1]){
	float **x;//apuntador doble para asignar memoria
	int i;
	x = (float **)malloc(200*sizeof(float*));//4000 es un valor arbitrario solo para poder iniciar la reservacion de memoria
	for (i=0;i<4000;i++) 
		x[i] = (float*)malloc(1*sizeof(float)); 
}*/

void main(main){
	float *x;//apuntador doble para asignar memoria
	int i;
	x = (float *)malloc(3*sizeof(float));//4000 es un valor arbitrario solo para poder iniciar la reservacion de memoria
	for(i=0;i<10;i++){
		printf("\nvalor x[%d] es %f\n",i,*(x+i));	
	}
	
	for(i=0;i<10;i++){//Codigo para saber con que valores inicializa el arreglo
	printf("\nDireccion x[%d] %p\n",i,(x+i));	
	}
	int tama=sizeof(x());//Codigo para saber si a pesar de ser memoria dinamiza la funcion sizeof me daria el tamaño total
	printf("El tamano del arreglo es %d",tama);
	return;
}