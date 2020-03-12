#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void encabezado(void);
int main(void){
	int numero;
	int contador=2;
	int primo1;
	int primo2;
	int primo3;
	encabezado();
	printf("\n\t\t\tIngresa un numero: ");
	scanf("%d", &numero);
	printf("\n\n\t\t\t 2");
	printf("\n\n\t\t\t 3");
	printf("\n\n\t\t\t 5");
	while(contador<=numero){
		primo1=contador%2;
		primo2=contador%3;
		primo3=contador%5;
		if(primo1==0){
		    contador++;
		}else if(primo2==0){
		    contador++;
		}else if(primo3==0){
			contador++;
		}else if(primo1!=0){
			printf("\n\n\t\t\t %d es un numero primo", contador); 
			contador++;
		}
		
	}
	getch();
	return 0;
}


void encabezado(){
	printf("\n\n==============================================================================");
	printf("\n\tPROGRAMA QUE DA LOS NUMEROS PRIMOS\n");
	printf("==============================================================================\n\n\n");
}

