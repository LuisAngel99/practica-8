#include <stdio.h>

char op = '\0';

 main(){

printf("\t\t\tMen�\n");
printf("a) Altas\n");
printf("b) Bajas\n");
printf("c) Cambios\n");
scanf("%c",&op);
printf("Escoge una opcion\n");

	switch(op) {
	
	case 'a':
		printf("Escogiste altas.\n");
		break;
	case 'b':
		printf("Escogiste bajas.\n");
		break;
	case 'c':
		printf("Escogiste cambios.\n");	
		break;
	default:
		printf("Opci�n no v�lida.\n");
		break;
	}
}
