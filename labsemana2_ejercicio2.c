#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MIN 0
#define MAX2 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int ItemsReales;
	int auxItems;
	int i;
	
	
	do{
	
	printf("\n indique con cuantos items distintos van a jugar");
	scanf("%d",&ItemsReales);
	}while(ItemsReales>MAX);
	
	
	int ArrayItemsJugadorUno[ItemsReales];
	int ArrayItemsJugadorDos[ItemsReales];
	int ArrayItemsMaximos[ItemsReales];
	int ArrayItemsTotales[ItemsReales];
	
	
	for(i=0;i<ItemsReales;i++){
	
		ArrayItemsMaximos[i]=MAX2;
		ArrayItemsTotales[i]=MIN;
	}
	
	printf("\n para el juagador UNO");
	for(i=0;i<ItemsReales;i++){
		do{
		
			printf("\n indique cuantos items tiene del tipo %d con un max de 5",i);
			scanf("%d",&auxItems);
			ArrayItemsJugadorUno[i]=auxItems;
		}while(auxItems>ArrayItemsMaximos[i]);
		
		ArrayItemsTotales[i]+=auxItems;
		
	}
	printf("\n para el juagador DOS");
	for(i=0;i<ItemsReales;i++){
		do{
		
		printf("\n indique cuantas items tiene del tipo %d con un max de 5",i);
		scanf("%d",&auxItems);
		ArrayItemsJugadorDos[i]=auxItems;
		}while(auxItems + ArrayItemsJugadorUno[i]>ArrayItemsMaximos[i] );
		ArrayItemsTotales[i]+=auxItems;
		
	}
	
	for(i=0;i<ItemsReales;i++){
		printf("\n el jugador UNO tiene %d items del tipo %d",ArrayItemsJugadorUno[i],i);
		printf("\n el jugador DOS tiene %d items del tipo %d",ArrayItemsJugadorDos[i],i);
		printf("\n en total se tiene %d items del tipo %d",ArrayItemsTotales[i],i);
		
	}
	
	return 0;
}
