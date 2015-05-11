#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaracion de funciones
int menu ();
void bienvenida ();
int eligePokemon ();
int pedirNumero (int min, int max);
void pausa ();
void dominguero ();
void Charmander ();
int movChar ();
void Squirtle ();
int movSquir ();
void Bulbasaur ();
int movBulba ();


// Funion Principal
int main (int argc, char *argv[]) {
  system ("color F0");
  //variables
  int opcion, vidaUsuario, vidaMaquina;
  int charmanderVida, charmanderataque, squirtleataque, squirtleVida;

  // Inicialización de la semilla
  srand(time(NULL));

  vidaUsuario = 0;
  vidaMaquina = 0;
  charmanderVida = 100;
  charmanderataque = 30;
  squirtleVida = 120;
  squirtleataque = 25;

  opcion = 1;
  for (;opcion != 0;) {
	   //Menu del juego
    menu();
      if (opcion != 0) {
        //En las siguentes funciones: Introduccion a la historia, nombre de usuario y eleccion de pokemon
        bienvenida ();
        eligePokemon ();
      }
      //Combate
    }
    // Pausa y final del programa.
    pausa ();
    return 0;
}



// FUNCIONES: Descripcion y uso de cada una de las funciones realizadas en el programa
int menu (){
	int opcion;
  // Limpieza de pantalla y presentación de menú
	system ("cls");
  printf ("\n Expanda su pantalla para mejorar la experiencia del juego.");
  printf ("\n\n\t\t\t     Pokemon!");
  printf ("\n\t\t\tDefiende tu honor");
  printf ("\n\n\t ======(-o-)======");
  printf ("\n\t||  1.- Jugar.   ||");
  printf ("\n\t||  0.- Salir.   ||");
  printf ("\n\t =================");

  // Para la lectura de la opción del usuario usamos otra funcion
  opcion = pedirNumero (0,1);
	return opcion;
}

void bienvenida () {
  char nombre[9];

  //Bienvenida e introduccion al juego
  system ("cls");
  printf ("\n - Bienvenido, soy el profesor Oak y estoy aqui para ayudarte a ser un buen");
  printf ("\n maestro Pokemon o por lo menos intentar que no seas un 'noob' de la vida");
  //Seleccion del nombre del jugador
  printf ("\n - Antes de nada, recuerdame tu nombre");
  printf ("\n\n + Mi nombre es: ");
  scanf ("%s", &nombre);
  printf ("\n - De acuerdo, %s ha llegado el momento que estabas esperando.",nombre);
  printf ("\n - Solo tendras una oportunidad para elegir al Pokemon que te ");
  printf ("\n seguira el resto de tu vida.");
  // Eleccion de pokemon
}
int eligePokemon () {
  int opcion;
  //Elegir un Pokemon, probablemente la decision mas importante del juego ;)
  printf ("\n\n\t  =======(-o-)=======");
  printf ("\n\t||  0.- Charmander. ||");
  printf ("\n\t||  1.- Squirtle.   ||");
  printf ("\n\t||  2.- Bulbasaur.  ||");
  printf ("\n\t ====================");
  printf ("\n");
  opcion = pedirNumero(0,2);
    if (opcion != 2) {
      //Si no es Bulbasaur
      if(opcion == 0){
        //Si es Charmander
        printf ("\n- Charmander siempre es una buena opcion, espero que estes preparado.");
        Charmander ();
        pausa ();
       // vidaUsuario = charmanderVida;
        movChar ();
        //Dominguero
        system ("cls");
        dominguero ();
        pausa ();
      } else {
          //Es Squirtle
          printf ("\n- Squirtle, no esta mal, espero que estes preparado.");
          Squirtle ();
          pausa ();
         // vidaUsuario = squirtleVida;
          //Dominguero
          system ("cls");
          dominguero ();
          pausa ();
        }

    } else {
        // As elegido a Bulbasaur
        printf ("\n - Te dije que solo tenias una oportunidad, y coges a Bulbasaur!?");
        printf ("\n - Nadie coge a Bulbasaur! ese lleva en la pokeball casi una decada,");
        printf ("\n ni si quiera se si esta vivo.");
        printf ("\n - En fin, suerte en tu camino, te hara falta...");
        Bulbasaur();
        pausa ();
        //Dominguero
        system ("cls");
        dominguero ();
        pausa ();

      }
      return opcion;
}

// Función pedirNumero
// Devuelve un número introducido por el usuario, que debe estar
// entre un valor mínimo y uno máximo.
int pedirNumero (int min , int max) {
  int opcion = max+1;
  // Bucle que pide un número al usuario mientras no se ajuste a un
  // mínimo y un máximo.
  printf("\n\tIntroduzca un numero (entre %d y %d): ", min, max);
	for (;(opcion < min) || (opcion > max);) {
		scanf("%d", &opcion);
    // Información del error, ya que el número no se ajusta al
    // mínimo y máximo.
		if ( (opcion < min) || (opcion > max) ) {
			printf("\nERROR, seleccione un numero valido");
      printf("\nEscriba un numero entre %d y %d: ", min, max);
		}
	}
	return opcion;
}

// Función obtenerNumeroAleatorio
// Función para obtener un número aleatorio entre un mínimo y un
// máximo dado
// Esta funcion necesita para funcionar dos argumentos int de entrada, y nos
// devolvera un numero aleatorio.
int obtenerNumeroAleatorio (int minimo, int maximo) {
 // Declaración de variables
 int numero;
 // Número aleatorio entre el máximo y el mínimo
 numero = (rand() % (maximo - minimo + 1)) + minimo;
 return numero;
}



// Función pausa
// Crea una pausa en el programa, aprovechando la orden system ("pause");
// No necesita Argumentos de entrada y no tiene Argumentos de salida.
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
  printf ("\n||    0.- Huir             ||");
  printf ("\n =========================== ");
  pedirNumero(0,4);
  scanf ("%d", &ataque);
  return ataque;
}

void Charmander () {
  printf ("\n\n                  _.--\"\"`-.. ");
  printf ("\n                ,'          `. ");
  printf ("\n              ,'          __  `. ");
  printf ("\n             /|          \" __   \\ ");
  printf ("\n            , |           / |.   . ");
  printf ("\n            |,'          !_.'|   | ");
  printf ("\n          ,'             '   |   | ");
  printf ("\n         /              |`--'|   | ");
  printf ("\n        |                `---'   | ");
  printf ("\n         .   ,                   |                       ,\". ");
  printf ("\n          ._     '           _'  |                    , ' \\ ` ");
  printf ("\n      `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,| ");
  printf ("\n      |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\ ");
  printf ("\n   -:..     `. `-..--_.,.<       `\"      / `.        `-/ |   . ");
  printf ("\n     `,         \"\"\"\"\'     `.              ,'         |   |  ',, ");
  printf ("\n       `.      '            '            /          '    |'. |/ ");
  printf ("\n         `.   |              \\       _,-'           |       '' ");
  printf ("\n           `._'               \\   '\"\\                .      | ");
  printf ("\n              |                '     \\                `._  ,' ");
  printf ("\n              |                 '     \\                 .'| ");
  printf ("\n              |                 .      \\                | | ");
  printf ("\n              |                 |       L              ,' | ");
  printf ("\n              `                 |       |             /   ' ");
  printf ("\n               \\                |       |           ,'   / ");
  printf ("\n             ,' \\               |  _.._ ,-..___,..-'    ,' ");
  printf ("\n            /     .             .      `!             ,j' ");
  printf ("\n           /       `.          /        .           .'/ ");
  printf ("\n          .          `.       /         |        _.'.' ");
  printf ("\n           `.          7`'---'          |------\"'_.' ");
  printf ("\n          _,.`,_     _'                ,''-----\"' ");
  printf ("\n      _,-_    '       `.     .'      ,\\ ");
  printf ("\n       -\" /`.         _,'     | _  _  _.| ");
  printf ("\n       \"\"--'---\"\"\"\"\"\'        `' '! |! / ");
  printf ("\n                               `\" \" -' ");
  printf ("\n ");
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
  printf ("\n||    0.- Huir             ||");
  printf ("\n =========================== ");
  pedirNumero(0,4);
  scanf ("%d", &ataque);
  return ataque;
}

void Squirtle () {
  printf ("\n ");
  printf ("\n                _,........__ ");
  printf ("\n             ,-'            \"`-. ");
  printf ("\n           ,'                   `-. ");
  printf ("\n         ,'                        \\ ");
  printf ("\n       ,'                           . ");
  printf ("\n       .'\\               ,\"\".       ` ");
  printf ("\n      ._.'|             / |  `       \\ ");
  printf ("\n      |   |            `-.'  ||       `. ");
  printf ("\n      |   |            '-._,'||       | \\ ");
  printf ("\n      .`.,'             `..,'.'       , |`-. ");
  printf ("\n      l                       .'`.  _/  |   `. ");
  printf ("\n      `-.._'-   ,          _ _'   -\" \\  .     ` ");
  printf ("\n `.\"\"\"\"\"'-.`-...,---------','         `. `....__. ");
  printf ("\n .'        `\"-..___      __,'\\          \\  \\     \\ ");
  printf ("\n \\_ .          |   `\"\"\"\"'    `.           . \\     \\ ");
  printf ("\n   `.          |              `.          |  .     L ");
  printf ("\n     `.        |`--...________.'.        j   |     | ");
  printf ("\n       `._    .'      |          `.     .|   ,     | ");
  printf ("\n          `--,\\       .            `7\"\"' |  ,      | ");
  printf ("\n             ` `      `            /     |  |      |    _,-'\"\"\"`-. ");
  printf ("\n              \\ `.     .          /      |  '      |  ,'          `. ");
  printf ("\n               \\  v.__  .        '       .   \\    /| /              \\ ");
  printf ("\n                \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''                | ");
  printf ("\n                 `        .        `._ ___,j.  `/ .-       ,---.     | ");
  printf ("\n                 ,`-.      \\         .\"     `.  |/        j     `    | ");
  printf ("\n                /    `.     \\       /         \\ /         |     /    j ");
  printf ("\n               |       `-.   7-.._ .          |\"          '         / ");
  printf ("\n               |          `./_    `|          |            .     _,' ");
  printf ("\n               `.           / `----|          |-............`---' ");
  printf ("\n                 \\          \\      |          | ");
  printf ("\n                ,'           )     `.         | ");
  printf ("\n                 7____,,..--'      /          | ");
  printf ("\n                                   `---.__,--.' ");
  printf ("\n");
}

int movBulba () {
  int ataque;
  printf ("\n\n(-o-)    Movimientos    (-o-)");
  printf ("\n =========================== ");
  printf ("\n||    1.- Latigo cepa      ||");
  printf ("\n||    2.- Placaje          ||");
  printf ("\n||    3.- Hoja afilada     ||");
  printf ("\n||    4.- Derribo          ||");
  printf ("\n =========================== ");
  printf ("\n||    0.- Huir             ||");
  printf ("\n =========================== ");
  pedirNumero(0,4);
  scanf ("%d", &ataque);
  return ataque;
}

void Bulbasaur () {
  printf ("\n ");
  printf ("\n                                          / ");
  printf ("\n                       _,.------....___,.' ',.-. ");
  printf ("\n                    ,-'          _,.--\"        | ");
  printf ("\n                  ,'         _.-'              . ");
  printf ("\n                 /   ,     ,'                   ` ");
  printf ("\n                .   /     /                     ``. ");
  printf ("\n                |  |     .                       \\.\\ ");
  printf ("\n      ____      |___._.  |       __               \\ `. ");
  printf ("\n    .'    `---\"\"       ``\"-.--\"'`  \\               .  \\ ");
  printf ("\n    .  ,            __               `              |   . ");
  printf ("\n     `,'         ,-\"'  .               \\             |    L ");
  printf ("\n    ,'          '    _.'                -._          /    | ");
  printf ("\n   ,`-.    ,\".   `--'                      >.      ,'     | ");
  printf ("\n  . .\'\\\'   `-'       __    ,  ,-.         /  `.__.-      ,' ");
  printf ("\n  ||:, .           ,'  ;  /  / \\ `        `.    .      .'/ ");
  printf ("\n  j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , / ");
  printf ("\n / L:_  |                 .  \"' :_;                `.'.' ");
  printf ("\n .    \"\"'                  \"\"\"\"\"'                    V ");
  printf ("\n  `.                                 .    `.   _,..  ` ");
  printf ("\n    `,_   .    .                _,-'/    .. `,'   __  ` ");
  printf ("\n     ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  . ");
  printf ("\n    /   `. \"`-.--\"'         _,' ,'     `---' |    `./  | ");
  printf ("\n   .   _  `\"\"'--.._____..--\"   ,             '         | ");
  printf ("\n   | .\" `. `-.                /-.           /          , ");
  printf ("\n   | `._.'    `,_            ;  /         ,'          . ");
  printf ("\n  .'          /| `-.        . ,'         ,           , ");
  printf ("\n  '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.' ");
  printf ("\n  `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--'  ");
  printf ("\n ");

}

/*
int ataquepoke (int ataque) {
  switch (){
    case 0:

    break;
    case 1:

    break;
    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
  }
} */
