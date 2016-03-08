#include<stdio.h>
void correlacion(float x[]);//prototipo de la funcion
void correlacion(float x[]){//declaración de la funcion preenfasis
	int i;//contador del ciclo
	for(i=1;i<16000;i++){//comienza el ciclo de preenfasis
		x[i]+=-0.95*x[i-1];
		//printf("\nx[%d]==%f\n",i,x[i]);
	}
	return;//termina la función
}