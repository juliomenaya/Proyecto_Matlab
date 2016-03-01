
#include<stdio.h>
//funcion para igualar vectores, A contendra los valores del vector B
//Por lo tanto El primer parametro es "El vector destino"
void igualar(float A[],float B[]){
	int i;
	int reng=sizeof(A)/sizeof(float);
	for(i=0;i<reng;i++){
		A[i]=B[i];
	}
	return;
}