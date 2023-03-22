#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int ItemsTotales = 100;
	int ItemsReales;
	int auxItems;
	int i;
	
	
	do{
	
	printf("\n indique con cuantos items distintos va a jugar");
	scanf("%d",&ItemsReales);
	}while(ItemsReales>ItemsTotales);
	
	
	int ArrayItems[ItemsReales];
	
	
	for(i=0;i<ItemsReales;i++){
		printf("\n indique cuantas items tiene del tipo %d",i);
		scanf("%d",&auxItems);
		ArrayItems[i]=auxItems;
		
	}
	
	for(i=0;i<ItemsReales;i++){
		printf("\n Usted tiene %d items del tipo %d",ArrayItems[i],i);
	
		
	}
}
