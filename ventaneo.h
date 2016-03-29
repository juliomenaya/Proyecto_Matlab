#include<stdio.h>
#include<math.h>
void ventaneo (float signal[],int num_ventanas,int traslape);//prototipo de la funcion
void ventaneo(float signal[],int num_ventanas,int traslape){
	FILE *archivo;
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
	archivo=fopen("Ventana.xls","w");
	for(i=0;i<renglon;i++){
		fprintf(archivo,"\n");
		for(j=0;j<num_ventanas;j++){
			fprintf(archivo,"\t%f",A[i][j]);
		}
	}
	/*for(i=0;i<10;i++){
		printf("\n");
		for(j=0;j<10;j++){
			printf("\t%f",A[i][j]);
		}
	}*/
	
	fclose(archivo);
	return;
}