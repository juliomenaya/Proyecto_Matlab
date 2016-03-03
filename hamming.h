#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.141592653589793
void hamming(float z[],int tamanio){
	float tama=tamanio; 
	float y[tamanio];
	float *vha,n;
	int i;
	printf("\ntamanio=%d\n",tamanio);//prueba
	vha=(float*)calloc(tamanio,sizeof(float));//Crea vector de ceros
	n=0;
	for(i=0;i<tamanio-1;i++){
		n=i/(tama-1);		
		printf("\nn= %f\n",n);
		vha[i]= 0.54-0.46*cos((2*pi*n));
		printf("\nHamming%f\n",vha[i]);
	}



	
	return;
}