#include<stdio.h>
#include<stdlib.h>//Biblioteca para usar la funcion rand y srand
#include<time.h>//Biblioteca para obtener la hora del sistema
#include"preenfasis.h" //cabecera para usar la funcion preenfasis
int main() {
	int i; //contador
	float signal[16000]; //Señal de entrada
	srand( time(NULL)); /*Comentar esta linea para que los numeros sean distintos
	cada vez que el programa se ejecute*/
	for (i = 0; i < 16000; i++){	//ciclo para que la señal tenga valores aleatorios
		signal[i]=(float)(rand() % 101)/100;
	}
	
	printf("\nAntes del filtro\n");
	
	for(i=0;i<10;i++){
		printf("\nsignal[%d]=%.2f\n",i,signal[i]);
	}
	
	preenfasis(signal);//llamada a la funcion preenfasis
  
	printf("\n Preenfasis\n");
	for(i=0;i<10;i++){
		printf("\nsignalP[%d]=%.2f\n",i,signal[i]);
	}
	return 0;
}