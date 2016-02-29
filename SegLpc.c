#include<stdio.h>
#include<stdlib.h>//libreria para usar funciones de memoria dinamica
#include<math.h>
SegLpc(float A[][1]){
	float *x,*y,tam,tam2;
	float** segmen;
	int i,j;
	int reng;
	reng=sizeof(A)/sizeof(float);//calcula el tamaño del vector de entrada 
	
	x = (float *)malloc(reng*sizeof(float));
	y =(float*)malloc(reng*sizeof(float));//Matriz Y para realizar preenfasis
	
	tam=floor(reng/4);
	tam2=ceil(tam/128);
	segmen=(float**)calloc(4,sizeof(float*));
	for(i=0;i<tam;i++){ //Inicializar la matriz segmen con ceros
		segmen[i]=(float*)calloc(tam,sizeof(float));
		
	}
	
	int ventana[4][tam2][128];
	int autocor[4][tam2][9];
	/*x[0]=10; //Codigo para saber si 
	x[1]=3;
	x[2]=4;
	x[3]=7;
	x[4]=9;
	for(i=0;i<reng;i++){
		y[i]=x[i]+((0.95)*(x[i]));
	}
	
	for(i=0;i<reng;i++){
		printf("\nEl valor en la posicion %d es %f\n",i,*(y+i));
		
	}
	*/
}

void main(main){
	/*float *x,*y;//apuntador doble para asignar memoria
	int i,j;
	x = (float *)malloc(10*sizeof(float));//4000 es un valor arbitrario solo para poder iniciar la reservacion de memoria
	  
	y =(float*)malloc(10*sizeof(float));//Matriz Y para realizar preenfasis
	
*/
	
	return;
}