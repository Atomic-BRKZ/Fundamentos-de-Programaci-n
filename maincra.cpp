# include  < stdio.h >

# define  TAMA�O  1000

int  main () {
  int aguante, num_filas;
  long  long  int diamantes [TAMA�O];
  largo  largo  int suma1 = 0 , suma2 = 0 ;
  
  scanf ( " % d " , & num_filas); // se pide numero de filas

  printf ( " Ingrese los diamantes en cada fila " );
  for ( int i = 0 ; i <num_filas; i ++) // Para pedir los diamantes en cada fila
  {
    scanf ( " % lld " , & diamantes [i]);
  }
  printf ( " Ingrese el aguante del pico " );
  scanf ( " % d " , y aguante); // se pide el aguante del pico


  for ( long  long  int i = 0 ; i <num_filas; i ++) {
        if ((num_filas - i) <aguante) continuar ;
        for ( long  long  int   j = 0 ; j <aguante; j ++) {
            suma1 + = diamantes [i + j];
        }
        if (suma1> = suma2) {
            suma2 = suma1;
            suma1 = 0 ;
        }
        m�s {
            suma1 = 0 ;
        }
    }


  printf ( " \ n \ n % lld \ n \ n " , suma2); // se imprime el valor m�s alto
  devuelve  0 ;
}
