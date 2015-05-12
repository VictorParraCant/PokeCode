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
int movimientos();
void Combate (int pokemonUsuario, int pokemonMaquina);
void perdedor();
void ganador();


// Funion Principal
int main (int argc, char *argv[]) {
  // Cambiamos el color de fondo y del texto de la cmd
  system ("color F0");

  // Inicialización de la semilla
  srand(time(NULL));

  int opcionMenu = 1;
  for (;opcionMenu != 0;) {
	   //Menu del juego
    opcionMenu = menu();
      if (opcionMenu != 0) {
        //En las siguentes funciones: Introduccion a la historia, nombre de usuario y eleccion de pokemon
        bienvenida ();
        eligePokemon ();
        //Combate pokemon
        Combate (Charmander,Squirtle);

      }
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
  printf ("\n Por favor, Expanda su pantalla para mejorar la experiencia del juego.");
  printf ("\n\n\n                                  .;:**'                           ");
  printf ("\n                                 `                                ");
  printf ("\n    .:XHHHHk.              db.   .;;.     dH  MX                 ");
  printf ("\n  oMMMMMMMMMMM       ~MM  dMMP :MMMMMR   MMM  MR      ~MRMN      ");
  printf ("\n  QMMMMMb  \"MMX       MMMMMMP !MX' :M~   MMM MMM  .oo. XMMM 'MMM ");
  printf ("\n    `MMMM.  )M> :X!Hk. MMMM   XMM.o\"  .  MMMMMMM X?XMMM MMM>!MMP ");
  printf ("\n     'MMMb.dM! XM M'?M MMMMMX.`MMMMMMMM~ MM MMM XM `\" MX MMXXMM  ");
  printf ("\n      ~MMMMM~ XMM. .XM XM`\"MMMb.~*?**~ .MMX M t MMbooMM XMMMMMP  ");
  printf ("\n       ?MMM>  YMMMMMM! MM   `?MMRb.    `\"\"\"   !L\"MMMMM XM IMMM   ");
  printf ("\n        MMMX   \"MMMM\"  MM       ~B:           !Mh.\"\"\" dMI IMMP   ");
  printf ("\n        'MMM.                                             IMX    ");
  printf ("\n         ~M!M                                             IMP    ");

  printf ("\n\n\t\t\t ======(-o-)======");
  printf ("\n\t\t\t||  1.- Jugar.   ||");
  printf ("\n\t\t\t||  0.- Salir.   ||");
  printf ("\n\t\t\t =================");
  printf("\n");

  // Para la lectura de la opción del usuario usamos otra funcion
  opcion = pedirNumero (0,1);
	return opcion;
}

void bienvenida () {
  char nombre[9];
  //Bienvenida e introduccion al juego
  system ("cls");
  printf ("\n (-o-)===============================(-o-)=================================(-o-) ");
  printf ("\n || Bienvenido, soy el profesor Oak y estoy aqui para ayudarte a ser un buen  ||");
  printf ("\n || maestro Pokemon o por lo menos intentar que no seas un 'noob' de la vida  ||");
  //Seleccion del nombre del jugador
  printf ("\n || Antes de nada, recuerdame tu nombre.                                      ||");
  printf ("\n  ============================================================================= ");
  printf ("\n\n (-o-)===============================(-o-)===============================(-o-) ");
  printf ("\n || Introduce tu nombre (maximo 9 caracteres): ");
  printf ("                              ||");
  scanf ("%s", &nombre);
  printf ("\n  ============================================================================== ");
  printf ("\n\n (-o-)============================(-o-)==============================(-o-) ");
  printf ("\n || De acuerdo, %s ha llegado el momento que estabas esperando.           ||",nombre);
  printf ("\n || Solo tendras una oportunidad para elegir al Pokemon que te            ||");
  printf ("\n || seguira el resto de tu vida.                                          ||");
  printf ("\n  ========================================================================= ");
}

int eligePokemon () {
  int pokemonUsuario, pokemonMaquina;
  int opcion;

  //Elegir un Pokemon, probablemente la decision mas importante del juego ;)
  printf ("\n\n\t\t  =======(-o-)=======");
  printf ("\n\t\t||  0.- Charmander. ||");
  printf ("\n\t\t||  1.- Squirtle.   ||");
  printf ("\n\t\t||  2.- Bulbasaur.  ||");
  printf ("\n\t\t ====================");
  printf ("\n");
  opcion = pedirNumero(0,2);
    if (opcion != 2) {
      //Si no es Bulbasaur
      if(opcion == 0){
        //Si es Charmander
        pokemonUsuario = 0;
        pokemonMaquina = 1;
        printf ("\n (-o-)============================(-o-)==============================(-o-) ");
        printf ("\n || Charmander siempre es una buena opcion, espero que estes preparado. ||");
        printf ("\n  ======================================================================= ");
        pausa();
        system ("cls");
        dominguero ();
        pausa ();
        Charmander ();
        pausa ();
      } else {
          //Es Squirtle
          pokemonUsuario = 1;
          pokemonMaquina = 2;
          printf ("\n (-o-)============================(-o-)==============================(-o-) ");
          printf ("\n || Squirtle, no esta mal, espero que estes preparado.                  ||");
          printf ("\n  ======================================================================= ");
          system ("cls");
          dominguero ();
          pausa ();
          Squirtle ();
        }
    } else {
        // As elegido a Bulbasaur
        pokemonUsuario = 2;
        pokemonMaquina = 1;
        printf ("\n (-o-)============================(-o-)==============================(-o-) ");
        printf ("\n || - Te dije que solo tenias una oportunidad, y coges a Bulbasaur!?    ||");
        printf ("\n || - Nadie coge a Bulbasaur! ese lleva en la pokeball casi una decada, ||");
        printf ("\n ||   ni si quiera se si esta vivo.                                     ||");
        printf ("\n || - En fin, suerte en tu camino..., te hara falta                     ||");
        printf ("\n  ======================================================================= ");
        pausa ();
        //Dominguero
        system ("cls");
        dominguero ();
        pausa ();
        Bulbasaur();
        pausa ();
      }
      return pokemonUsuario, pokemonMaquina;
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
      printf("\n\nEscriba un numero entre %d y %d: ", min, max);
		}
	}
	return opcion;
}


// Función pausa
// Crea una pausa en el programa, aprovechando la orden system ("pause");
// No necesita Argumentos de entrada y no tiene Argumentos de salida.
void pausa () {
  printf ("\n\n");
  system ("pause");
}

void dominguero () {
  printf ("\n (-o-)============================(-o-)================================(-o-) ");
  printf ("\n || Sales del laboratorio del profesor Oak                                ||");
  printf ("\n || Vas caminando tranquilamente cuando de repente...                     ||");
  printf ("\n ||                                                                       ||");
  printf ("\n || - Eh! tu! Que estas mirando? Quieres pelea?                           ||");
  printf ("\n || Tu rezas para que no sea un dominguero, pero estan por todos lados,   ||");
  printf ("\n || es imposible librarse de ellos, asi que te preparas para la batalla   ||");
  printf ("\n  ========================================================================= ");
}

int movChar () {
  int ataque;
  printf ("\n\n\t(-o-)    Movimientos    (-o-)");
  printf ("\n\t =========================== ");
  printf ("\n\t||    1.- Cola latigo      ||");
  printf ("\n\t||    2.- Placaje          ||");
  printf ("\n\t||    3.- Ascuas           ||");
  printf ("\n\t||    4.- Morder           ||");
  printf ("\n\t =========================== ");
  printf ("\n\t||    0.- Descansar        ||");
  printf ("\n\t =========================== ");
  ataque = pedirNumero(0,4);
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
  printf ("\n (-o-)================== Charmander! ==================(-o-) ");
}

int movSquir () {
  int ataque;
  printf ("\n\n(-o-)    Movimientos    (-o-)");
  printf ("\n\t =========================== ");
  printf ("\n\t||    1.- Burbuja          ||");
  printf ("\n\t||    2.- Placaje          ||");
  printf ("\n\t||    3.- Pistola Agua     ||");
  printf ("\n\t||    4.- Cabezazo         ||");
  printf ("\n\t =========================== ");
  printf ("\n\t||    0.- Descansar        ||");
  printf ("\n\t =========================== ");
  ataque = pedirNumero(0,4);
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
  printf ("\n (-o-)================== Squirtle! ==================(-o-) ");
}

int movBulba () {
  int ataque;
  printf ("\n\n\t(-o-)    Movimientos    (-o-)");
  printf ("\n\t =========================== ");
  printf ("\n\t||    1.- Latigo cepa      ||");
  printf ("\n\t||    2.- Placaje          ||");
  printf ("\n\t||    3.- Hoja afilada     ||");
  printf ("\n\t||    4.- Derribo          ||");
  printf ("\n\t =========================== ");
  printf ("\n\t||    0.- Descansar        ||");
  printf ("\n\t =========================== ");
  ataque=pedirNumero(0,4);
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
  printf ("\n (-o-)================== Bulbasaur! ==================(-o-) ");

}

// Función obtenerNumeroAleatorio
// Función para obtener un número aleatorio entre un mínimo y un  máximo dado
// Esta funcion necesita para funcionar dos argumentos int de entrada, y nos
// devolvera un numero aleatorio.
int obtenerNumeroAleatorio (int minimo, int maximo) {
 // Declaración de variables
 int numero;
 // Número aleatorio entre el máximo y el mínimo
 numero = (rand() % (maximo - minimo + 1)) + minimo;
 return numero;
}

int movimientos() {

}

void Combate (int pokemonUsuario, int pokemonMaquina){
  int turno = obtenerNumeroAleatorio(0,1);
  int vidaUsuario, vidaMaquina, quitavida;
  vidaUsuario = 100;
  vidaMaquina = 100;
  int ataquebasic = 10;
  while (vidaUsuario > 0 && vidaMaquina > 0) {
    if (turno == 1) {
      quitavida = obtenerNumeroAleatorio(10,35);
      int ataque = movChar();
      switch (ataque){
        case 0:
          vidaUsuario = vidaUsuario + quitavida;
          break;
        case 1:
          vidaMaquina = vidaMaquina - quitavida + 2;
          break;
        case 2:
          vidaMaquina = vidaMaquina - quitavida + 5;
          break;
        case 3:
          vidaMaquina = vidaMaquina - quitavida + 7;
          break;
        case 4:
          vidaMaquina = vidaMaquina - quitavida + 10;
          break;
      }
      printf ("\n\n (-o-)============ Tu turno ================(-o-)");
      printf ("\n || %d de ataque.                              ||",quitavida);
      printf ("\n || Dominguero tiene %d de vida.               ||",vidaMaquina);
      printf ("\n (-o-)======================================(-o-)");
      turno = 0;
      pausa();
    } else {
      quitavida = obtenerNumeroAleatorio(10,35);
      vidaUsuario = vidaUsuario - quitavida;
      printf ("\n\n (-o-)=========== Dominguero ===============(-o-)");
      printf ("\n || %d de ataque.                              ||",quitavida);
      printf ("\n || Tienes %d vida.                            ||",vidaUsuario);
      printf ("\n (-o-)======================================(-o-)");
      turno = 1;
      pausa();
    }
  if (vidaUsuario <= 0) {
    perdedor();
    }
  if (vidaMaquina <=0) {
    ganador();
    }
  }
}

void ganador(){
  printf("\n You Win!!!");
  pausa();
}

void perdedor() {
  printf("\n You Lose!!!");
  pausa();
}
