#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int opc;
main()
{
	do 
	{
	
	puts("\t\t\t\tMenu ");
	puts("1) Altas");
	puts("2) Bajas");
	puts("3) Cambios");
	puts("4) Salir");
	printf("Seleccione una opcion: \n");
	scanf("%d",&opc);
	system("cls");
		switch(opc)
		{
			case 1:
				printf("Seleccionaste Altas");
				break;
			case 2: 
				printf("Seleccionaste Bajas");
				break;
			case 3:
				printf("Seleccionaste Cambios");
				break;
			case 4: 
				printf("Salir");
				break;
			default:
				printf("Opcion invalida");
				break;
		}
	}while(opc!=4);
	getch();
}
