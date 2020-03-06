
#include <stdio.h>
#include <conio.h>
#include <string.h>
//===============================================================================
#define TAM 6
//===============================================================================
//   ESTRUCTURAS
//===============================================================================
//===============================================================================
//   PROTOTIPO DE FUNCIONES
//===============================================================================
void encabezado(void);
void fin(void);
//===============================================================================
//   PRINCIPAL
//===============================================================================
int main(void){
	char cadena[TAM];
	int contador;
	int a;
	int b;
	system("cls");
	system("color 71");
	encabezado();
	printf("\n\t\t\tIngresa una palabra: ");
	scanf("%s", &cadena);
    a=strlen(cadena);
    a=a-1;
    for(contador=0, b=a; contador<=a/2; contador++, b--);
    	if(cadena[contador]==cadena[b]){
    		printf("\n\n\t\t\tEs un palindromo.\n");
		}else{
			printf("\n\n\t\t\tNo es un palindromo.\n");
		}
	fin();
	getch();
	return 0;
}

