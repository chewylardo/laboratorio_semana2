#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int ItemsTotales = 100;
	int ItemsReales;
	int auxItems;
	int i;
	
	
	do{
	
	printf("\n indique con cuantos items distintos van a jugar");
	scanf("%d",&ItemsReales);
	}while(ItemsReales>ItemsTotales);
	
	
	int ArrayItemsJugadorUno[ItemsReales];
	int ArrayItemsJugadorDos[ItemsReales];
	int ArrayItemsTotales[ItemsReales];
	
	for(i=0;i<ItemsReales;i++)
		ArrayItemsTotales[i]=5;
	
	printf("\n para el juagador UNO");
	for(i=0;i<ItemsReales;i++){
		do{
		
			printf("\n indique cuantos items tiene del tipo %d con un max de 5",i);
			scanf("%d",&auxItems);
			ArrayItemsJugadorUno[i]=auxItems;
		}while(auxItems>ArrayItemsTotales[i]);
		
	}
	printf("\n para el juagador DOS");
	for(i=0;i<ItemsReales;i++){
		do{
		
		printf("\n indique cuantas items tiene del tipo %d con un max de 5",i);
		scanf("%d",&auxItems);
		ArrayItemsJugadorDos[i]=auxItems;
		}while(auxItems + ArrayItemsJugadorUno[i]>ArrayItemsTotales[i] );
		
	}
	
	for(i=0;i<ItemsReales;i++){
		printf("\n el jugador UNO tiene %d items del tipo %d",ArrayItemsJugadorUno[i],i);
		printf("\n el jugador DOS tiene %d items del tipo %d",ArrayItemsJugadorDos[i],i);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
