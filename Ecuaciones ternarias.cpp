#include<stdio.h>
#include<conio.h>
int x,y;


main()
{
	printf("Dame el valor de x ");
	scanf("%d", &x);
	
	if(x==0)
	{
	 			printf("No hay resultado de y cuando es igual a 2 : %d  ", y);
		}
	else
	
	y = x< 2 ?  y=4*(x*x)-2*(x)+0 :	y=((x)*(x)-4*(x)+2);
	
			printf("El resultado de y es: %d  ", y); 
	getch();
	
}
