#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MIN 7

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int aux1,aux2,i,j;
	int contFiebre = 0;
	float aux3 = 0;
	
	do{
		printf("Cuantos pacientes desea usted ingresar al sistema(maximo 100)");
		scanf("%d",&aux1);
	}while(aux1>MAX);
	
	do{
		printf("\n\n Cuantos dias estos pacientes han estado en observacion?(tienen que tener un minimo de 7 dias)");
		scanf("%d",&aux2);
	}while(aux2<MIN);

	
	float TemperaturaDelosPacientes[aux2][aux1];
	int EdadesDelosPacientes[aux1];
	
	for(i=0;i<aux1;i++){
		printf("\n\n Cual es la edad del paciente en la habitacion %d",i);
		scanf("%d",&EdadesDelosPacientes[i]);
		
	}
	
	
	for(i=0;i<aux1;i++){
		for(j=0;j<aux2;j++){
			printf("\n\n cual es la temperatura que registra el paciente %d el dia %d (en celcius)",i,j);
			scanf("%f",&TemperaturaDelosPacientes[i][j]);
			
		}	
	}
	
	
	
	for(i=0;i<aux1;i++){
		printf("\n\n el paciente de la habitacion %d presenta las temperaturas de",i);
		for(j=0;j<aux2;j++){
			printf(" \n /%fC/%fF/",TemperaturaDelosPacientes[i][j], (TemperaturaDelosPacientes[i][j]* 9/5)+32);
			if(TemperaturaDelosPacientes[i][j]>37.5){
				printf("\n Fiebre");
			 	contFiebre++;
			}else{
				contFiebre=0;
			}
			if(contFiebre>=3){
			 		printf("\n el paciente tubo fiebre durante %d dias consecutivos",contFiebre);
			}
		
			
		}	
		
		 
	}
	
	
	
	for(i=0;i<aux1;i++){
		for(j=0;j<aux2;j++){
			
			aux3= aux3 + TemperaturaDelosPacientes[i][j];
		}
		aux3=(float)aux3/aux2;
		printf("\n\n el paciente de la habitacion %d presento en promedio una temperatura de %f",i,aux3);
		aux3=0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
