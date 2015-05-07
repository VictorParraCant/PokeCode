#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
  //variables
  int opcion, i, pokemoElegido;
  char nombre[9];

  opcion = 1;
  for (i = 0; opcion != 0; i++) {
	//Menu del juego
  system ("cls");
  printf ("\t\t\t\tPokemon!");
  printf ("\n\t\t\t Defiende tu honor");
  printf ("\n\n\t1.- Jugar.");
  printf ("\n\t0.- Salir.");
  // Jugar o Salir
  printf ("\n\nIntroduzca su opcion: ");
  scanf ("%d", &opcion);

  if (opcion != 0) {
    //Bienvenida
    system ("cls");
    printf ("\n - Bienvenido, soy el profesor Oak y estoy aqui para ayudarte a ser un buen");
    printf ("\n maestro Pokemon o por lo menos intentar que no seas un 'noob' de la vida");
    //Nombre del jugador
    printf ("\n - Antes de nada, recuerdame tu nombre");
    printf ("\n + Mi nombre es: ");
    scanf ("%s", &nombre);
    printf ("\n - De acuerdo, %s ha llegado el momento que estabas esperando.",nombre);
    printf ("\n - Solo tendras una oportunidad para elegir al Pokemon que te ");
    printf (" acompañara el resto de tu vida.");
    printf ("\n\t0.- Charmander.");
    printf ("\n\t1.- Squirtle.");
    printf ("\n\t2.- Bulbasaur.");

    }


    //Elegir Pokemon

    //Combate
  }




  // Pausa y final del programa.
  return 0;
}
