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
	int selector1 = 0;
	int selector2 = 0;
	
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
	
	
	


	printf("\n\n\n\n");
	
	printf("¿Quiere el jugador 1 añadir o quitar itemes de su inventario?");
	printf("\n si[1]   no[2]");
	scanf("%d",&selector1);
	printf("\n\n\n\n");
	
	
	
	if(selector1 == 1){
		
		printf("¿Quiere el jugador 1 añadir o quitar itemes de su inventario?");
		printf("\n añadir[1]   quitar[2]");	
		scanf("%d",&selector2);
		
		if(selector2==1){
			printf("\n\n");
			printf("¿De que item quiere añadir?");
			scanf("%d",&i);
			
			if(ArrayItemsTotales[i]+1<5){
				
				ArrayItemsTotales[i]+=1;
				ArrayItemsJugadorUno[i]+=1;
				printf("el jugador 1 añadio un item de este tipo");
			}else{
				printf("no se pudo añadir mas items de este tipo dado a que sobrepasaria el limite de 5");	
			}
	
			
			
		}else{
			
			printf("\n\n");
			printf("¿De que item quiere eliminar?");
			scanf("%d",&i);
			
			if(ArrayItemsJugadorUno[i]-1>=0){
				
				ArrayItemsTotales[i]-=1;
				ArrayItemsJugadorUno[i]-=1;
				printf("\n\n");
				printf("el jugador 1 elimino un item de este tipo");
			}else{
				printf("no se pudo añadir mas items de este tipo dado a que sobrepasaria el limite de 5 o el item dejaria de existir");	
			}
	
			
		}
	}
		
	printf("\n\n\n\n");
	
	printf("¿Quiere el jugador 2 añadir o quitar itemes de su inventario?");
	printf("\n si[1]   no[2]");
	scanf("%d",&selector1);
	printf("\n\n\n\n");
	
	
	
	if(selector1 == 1){
		
		printf("¿Quiere el jugador 2 añadir o quitar itemes de su inventario?");
		printf("\n añadir[1]   quitar[2]");	
		scanf("%d",&selector2);
		
		if(selector2==1){
			printf("\n\n");
			printf("¿De que item quiere añadir?");
			scanf("%d",&i);
			
			if(ArrayItemsTotales[i]+1<5){
				
				ArrayItemsTotales[i]+=1;
				ArrayItemsJugadorDos[i]+=1;
				printf("el jugador 2 añadio un item de este tipo");
			}else{
				printf("no se pudo añadir mas items de este tipo dado a que sobrepasaria el limite de 5");	
			}
	
			
			
		}else{
			
			printf("\n\n");
			printf("¿De que item quiere eliminar?");
			scanf("%d",&i);
			
			if(ArrayItemsJugadorDos[i]-1>-1){
				
				ArrayItemsTotales[i]-=1;
				ArrayItemsJugadorDos[i]-=1;
				printf("\n\n");
				printf("el jugador 2 elimino un item de este tipo");
			}else{
				printf("no se pudo añadir mas items de este tipo dado a que sobrepasaria el limite de 5 o el item dejaria de existir");	
			}
	
			
		}
		
		
		
		
		
	}
	
	printf("\n\n\n\n");
	
	
	for(i=0;i<ItemsReales;i++){
		printf("\n el jugador UNO tiene %d items del tipo %d",ArrayItemsJugadorUno[i],i);
		printf("\n el jugador DOS tiene %d items del tipo %d",ArrayItemsJugadorDos[i],i);
		printf("\n en total se tiene %d items del tipo %d",ArrayItemsTotales[i],i);
		
	}
	
	
	
	
	

	return 0;
}
