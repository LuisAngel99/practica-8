#include<stdio.h>
int x,y;


main()
{
	printf("Dame el valor de x ");
	scanf("%d", &x);
	
	if(x>2)
	{
	
	y=((x)*(x)-4*(x)+2);	
	 	printf("El resultado de y es: %d", y);
	}
	else
		 if (x<2)
		 {	
			 y=4*(x*x)-2*(x)+0;
			printf("El resultado de y es: %d", y); 
		}
		else
	
			printf("No hay resultado de y cuando es igual a 2 : %d", y);
	
}
