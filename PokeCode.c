#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaracion de funciones
int menu ();
int pedirNumero (int min, int max);
void pausa ();
void dominguero ();
int movChar ();
int movSquir ();

int main (int argc, char *argv[]) {
  //variables
  int opcion, i, vidaUsuario, vidaMaquina;
  int pokElegido, charmanderVida, charmanderataque, squirtleataque, squirtleVida;
  char nombre[9];

  // Inicialización de la semilla
  srand(time(NULL));

  vidaUsuario = 0;
  vidaMaquina = 0;
  charmanderVida = 100;
  charmanderataque = 30;
  squirtleVida = 120;
  squirtleataque = 25;
  opcion = 1;
  
  for (i = 0; opcion != 0; i++) {
	//Menu del juego


    if (opcion != 0) {
      //Bienvenida
      system ("cls");
      printf ("\n - Bienvenido, soy el profesor Oak y estoy aqui para ayudarte a ser un buen");
      printf ("\n maestro Pokemon o por lo menos intentar que no seas un 'noob' de la vida");
      //Nombre del jugador
      printf ("\n - Antes de nada, recuerdame tu nombre");
      printf ("\n\n + Mi nombre es: ");
      scanf ("%s", &nombre);
      printf ("\n - De acuerdo, %s ha llegado el momento que estabas esperando.",nombre);
      printf ("\n - Solo tendras una oportunidad para elegir al Pokemon que te ");
      printf ("\n seguira el resto de tu vida.");
      //Elegir Pokemon
      printf ("\n\n\t0.- Charmander.");
      printf ("\n\t1.- Squirtle.");
      printf ("\n\t2.- Bulbasaur.");
      printf ("\n\nIntroduzca su opcion: ");
      scanf ("%d", &pokElegido);
        if (pokElegido != 2) {
          //Si no es Bulbasaur
          if(pokElegido == 0){
            //Si es Charmander
            printf ("\n- Charmander siempre es una buena opcion, espero que estes preparado.");
            pausa ();
            vidaUsuario = charmanderVida;
            movChar ();

            //Dominguero
            system ("cls");
            dominguero ();
            pausa ();


          } else{
              //Es Squirtle
              printf ("\n- Squirtle, no esta mal, espero que estes preparado.");
              pausa ();
              vidaUsuario = squirtleVida;

              //Dominguero
              system ("cls");
              dominguero ();
              pausa ();

            }

        } else {
            printf ("\n - Te dije que solo tenias una oportunidad, y coges a Bulbasur!?");
            printf ("\n - Me has caido bien, pero esta vez elige un pokemon de verdad");
          }

      }

      //Combate
  }


  // Pausa y final del programa.
  pausa ();
  return 0;
}

//FUNCIONES
int menu (){
	int opcion;
	system ("cls");
  printf ("\t\t\t\tPokemon!");
  printf ("\n\t\t\t Defiende tu honor");
  printf ("\n\t ======(-o-)======");
  printf ("\n\t||  1.- Jugar.    ||");
  printf ("\n\t||  0.- Salir.    ||");
  printf ("\n\t =================");
  // Jugar o Salir
  printf ("\n\nIntroduzca su opcion: ");
  opcion = pedirNumero (0,1);
	return opcion;
}
int pedirNumero (intmin , int max){
	int opcion = max+1;
	for (;(opcion < min) || (opcion > max);) {
		scanf("%d", &opcion);
		if ((opcion < min || (opcion > max)){
			printf("Error, seleccione un numero valido")
		}
	}
	return opcion;
}

void pausa () {
  printf ("\n\n");
  system ("pause");
}
void dominguero () {
  printf ("\n\n\t Sales del laboratorio del profesor Oak");
  printf ("\n\t Vas caminando tranquilamente cuando de repente...");
  printf ("\n\n - Eh! tu! Que estas mirando? Quieres pelea?");
  printf ("\n\n\t Tu rezas para que no sea un dominguero, pero estan por todos lados,");
  printf ("\n\t es imposible librarse de ellos, asi que te preparas para la batalla");
}

int movChar () {
  int ataque;
  printf ("\n\n(-o-)    Movimientos    (-o-)");
  printf ("\n =========================== ");
  printf ("\n||    1.- Cola latigo      ||");
  printf ("\n||    2.- Placaje          ||");
  printf ("\n||    3.- Ascuas           ||");
  printf ("\n||    4.- Morder           ||");
  printf ("\n =========================== ");
  printf ("\n Elige ataque: ");
  scanf ("%d", &ataque);

  return ataque;
}

int movSquir () {
  int ataque;
  printf ("\n\n(-o-)    Movimientos    (-o-)");
  printf ("\n =========================== ");
  printf ("\n||    1.- Burbuja          ||");
  printf ("\n||    2.- Placaje          ||");
  printf ("\n||    3.- Pistola Agua     ||");
  printf ("\n||    4.- Cabezazo         ||");
  printf ("\n =========================== ");
  printf ("\n Elige ataque: ");
  scanf ("%d", &ataque);
  return ataque;
}

int ataquepoke (int ataque) {
  switch (){
    case 1:
      
    break;
    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
  }
}
