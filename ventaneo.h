#include<stdio.h>
#include<math.h>
void ventaneo (float signal[],int num_ventanas,int traslape);//prototipo de la funcion
void ventaneo(float signal[],int num_ventanas,int traslape){
	int renglon,columna,i,j;//variables para llevar los valores de la matriz y contadores
	renglon=(int)(floor(16000/num_ventanas));//renglones que tendrá la matriz de ventaneo
	float A[renglon][num_ventanas]; //Matriz de ventaneo
	int desplazamiento=0;//variable para manejar el traslape
	for(i=0;i<renglon;i++){//Llenado de la matriz
		for(j=0;j<num_ventanas;j++){
			A[i][j]=signal[desplazamiento+j];
		}
		desplazamiento=i*traslape;
	}
	/*Los renglones de la matriz seran las ventanas de la señal*/
	return;
}