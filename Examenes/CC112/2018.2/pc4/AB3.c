//AB3.c
#include <cstdio>
#define MAX 50 //M�xima entrada de productos
typedef struct item_detalles{
	char nombre[10];
	int cantidad;
	float precio;
} Item;
main(){
	Item lista[MAX]; //variable estructura
	int i=0, I, opcion;
	float gasto, gastos=0;
	printf("Gran fiesta de fin de a�o\n");
	do{							
		printf("Ingrese art�culo[%2d]:\n",i+1);
		printf("Nombre? ");		
		scanf("%s", lista[i].nombre);
		printf("Precio? ");
		scanf("%f",&lista[i].precio);
		printf("Cantidad? ");
		scanf("%d",&lista[i].cantidad);
		i++;
		printf("\nQuieres m�s art�culos (SI: presiona 1): ");
		scanf("%d",&opcion);
//		getchar();
	} while(opcion==1);
	I = i;
//imprime las cuentas
	printf("Art�culos:\n");
	for(i=0; i<I; i++) {
		gasto = lista[i].cantidad*lista[i].precio;
		printf("%s  %.2f  %3d  %.2f\n", lista[i].nombre, lista[i].precio, lista[i].cantidad, gasto);
		gastos += gasto;
	}
	printf("Gasto total: %.2f\n",gastos);
	printf("  Cu�ntos amigos? ");
	scanf("%d",&i);
	printf("  Cada amigo pagar�: %.2f\n",(gastos/i));
	printf("  Gracias... A gozar de la fiesta!!!\n");
}
