
#include <stdio.h>
#include <conio.h>

struct persona{
	char nombre[40];
	int edad;
	float talla;
};

void encabezado(void);
void fin(void);
void pregunta(struct persona *);

int main(void){
	system("cls");
	system("color F1");
	encabezado();
	struct persona instancia;
	pregunta(& instancia);
	printf("\n\t\t\t  Nombre: %s", instancia.nombre);
	printf("\n\t\t\t  Edad: %d años", instancia.edad);
	printf("\n\t\t\t  Talla: %.2f mts.\n\n", instancia.talla);
	fin();
	getch();
	return 0;
}

void pregunta(struct persona *p){
	printf("\t\t\t   Nombre: ");
	gets(p->nombre);
	printf("\t\t\t   Edad: ");
	scanf("%d", &p->edad);
	printf("\t\t\t   Talla: ");
	scanf("%f", &p->talla);
}

void encabezado(){
	printf("\n\n==============================================================================");
	printf("\n\tPROGRAMA QUE EJEMPLIFICA EL USO DE UNA ESTRUCTURA\n");
	printf("==============================================================================\n\n\n");
}

void fin(){
	printf("\n\n==============================================================================");
	printf("\nPROGRAMACION ESTRUCTURADA\t\tALUMNO: Uziel Esau Lopez Ruiz\n");
	printf("UNIVERSIDAD TECNOLOGICA DE LA MIXTECA\n");
	printf("==============================================================================\n\n\n");
}


