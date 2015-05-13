#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaracion de funciones
int menu ();
void bienvenida ();
int eligePokemon ();
int pedirNumero (int min, int max);
int obtenerNumeroAleatorio(int min, int max);
void pausa ();
void dominguero ();
void Charmander ();
void Squirtle ();
void Bulbasaur ();
void Raichu ();
void Onix ();
void Charizard ();
int movChar ();
int movSquir ();
int movBulba ();
int movimientos();
void Combate (int pokemonUsuario, int pokemonMaquina);
void perdedor();
void ganador();
void torneo();
void ganadorTorneo ();
void perdedorTorneo();

// Funion Principal
int main (int argc, char *argv[]) {
  // Cambiamos el color de fondo y del texto de la cmd
  system ("color F0");
  // Inicialización de la semilla.
  srand(time(NULL));

  int opcionMenu = 1;
  for (;opcionMenu != 0;) {
	   //Muestra el menu del juego.
    opcionMenu = menu();
      if (opcionMenu != 0) {
        if (opcionMenu == 1) {
          //En las siguentes funciones: Introduccion a la historia, nombre de usuario y eleccion de pokemon.
          bienvenida ();
          // Esta variable guarda el pokemon que elige el jugador.
          int query_pokemonUsuario = eligePokemon ();
          // Esta guarda el un pokemon aleatorio para la maquina.
          int query_pokemonMaquina = obtenerNumeroAleatorio(0,2);
          // En esta funcion comienza el bucle que da sentido al juego, como su nombre indica es el combate Pokemon.
          Combate ( query_pokemonUsuario, query_pokemonMaquina );
        } else {
          torneo();
        }
      }
    }
    // Pausa y final del programa.
    pausa ();
    return 0;
}



// FUNCIONES: Descripcion y uso de cada una de las funciones realizadas en el programa.
int menu () {
	int opcion;
  // Limpieza de pantalla, pantalla de bienvenida y presentación de menú.
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
  printf ("\n\t\t\t||  2.- Torneo.  ||");
  printf ("\n\t\t\t||  0.- Salir.   ||");
  printf ("\n\t\t\t =================");
  printf("\n");


  // Para la lectura de la opción del usuario usamos otra funcion.
  opcion = pedirNumero (0,2);
	return opcion;
}

void bienvenida () {
  char nombre[9];
  //Bienvenida e introduccion al juego.
  system ("cls");
  printf ("\n (-o-)==============================(-o-)================================(-o-) ");
  printf ("\n || Bienvenido, soy el profesor Oak y estoy aqui para ayudarte a ser un buen ||");
  printf ("\n || maestro Pokemon o por lo menos intentar que no seas un 'noob' de la vida ||");
  //Seleccion del nombre del jugador
  printf ("\n || Antes de nada, recuerdame tu nombre.                                     ||");
  printf ("\n  ============================================================================ ");

  printf ("\n\n Introduce tu nombre (maximo 9 caracteres): ");
  scanf ("%s", &nombre);

  printf ("\n\n (-o-)==========================(-o-)============================(-o-) ");
  printf ("\n || De acuerdo, %s ha llegado el momento que estabas esperando.       ||",nombre);
  printf ("\n || Solo tendras una oportunidad para elegir al Pokemon que te       ||");
  printf ("\n || seguira el resto de tu vida.                                     ||");
  printf ("\n  ====================================================================== ");
}

int eligePokemon () {
  int pokemonUsuario;
  int opcion;
  // Esta funcion nos sirve para saber que pokemon a elegido el usuario, esta sera guardad en una variable
  // que mas tarde se usara para saber que movimientos ha de mostrar por pantalla.
  printf ("\n\n\t\t  =======(-o-)=======");
  printf ("\n\t\t||  0.- Charmander. ||");
  printf ("\n\t\t||  1.- Squirtle.   ||");
  printf ("\n\t\t||  2.- Bulbasaur.  ||");
  printf ("\n\t\t ====================");
  printf ("\n");
  //Elegir un Pokemon, probablemente haya sido la decision mas importante de nuestra infancia.
  opcion = pedirNumero(0,2);
    if (opcion != 2) {
      //Si no eliges a Bulbasaur
      if(opcion == 0){
        //As elegido a Charmander
        pokemonUsuario = 0;
        printf ("\n (-o-)============================(-o-)==============================(-o-) ");
        printf ("\n || Charmander siempre es una buena opcion, espero que estes preparado. ||");
        printf ("\n  ======================================================================= ");
        pausa();
        // Limpiamos la pantalla, y en la funcion dominguero mostramos un pequeño mensaje,
        // de nuestro enemigo, el Dominguero.
        system ("cls");
        dominguero ();
        printf ("\n\n (-o-)============================(-o-) ");
        printf ("\n || Dominguero elige a Squirtle.     ||");
        printf ("\n  ==================================== ");
        printf("\n");
        Squirtle ();
        pausa ();
        // Mostramos la imagen de nuestro Charmander.
        printf ("\n (-o-)============================(-o-) ");
        printf ("\n || Charmander te eligo a ti!!!      ||");
        printf ("\n  ==================================== ");
        Charmander ();
        pausa ();
      } else {
          //As elegido a Squirtle
          pokemonUsuario = 1;
          printf ("\n (-o-)============================(-o-)==============================(-o-) ");
          printf ("\n || Squirtle, no esta mal, espero que estes preparado.                  ||");
          printf ("\n  ======================================================================= ");
          system ("cls");
          dominguero ();
          printf ("\n\n (-o-)============================(-o-) ");
          printf ("\n || Dominguero elige a Bulbasaur .   ||");
          printf ("\n  ==================================== ");
          printf("\n");
          Bulbasaur();
          pausa ();
          // Mostramos la imagen de nuestro Squirtle.
          printf ("\n (-o-)============================(-o-) ");
          printf ("\n || Squirtle te eligo a ti!!!        ||");
          printf ("\n  ==================================== ");
          Squirtle ();
          pausa ();
        }
    } else {
        // As elegido a Bulbasaur
        pokemonUsuario = 2;
        printf ("\n (-o-)===========================(-o-)==============================(-o-) ");
        printf ("\n ||  Te dije que solo tenias una oportunidad, y coges a Bulbasaur!?    ||");
        printf ("\n ||  Nadie coge a Bulbasaur! ese lleva en la pokeball desde que        ||");
        printf ("\n ||  recuerdo, es mas ,ni si quiera se si esta vivo...                 ||");
        printf ("\n ||  En fin, suerte en tu camino..., te hara falta.                    ||");
        printf ("\n  ====================================================================== ");
        pausa ();
        //Dominguero
        system ("cls");
        dominguero ();
        printf ("\n\n (-o-)============================(-o-) ");
        printf ("\n || Dominguero elige a Bulbasaur .    ||");
        printf ("\n  ==================================== ");
        printf("\n");
        Charmander();
        pausa ();
        // Mostramos la imagen de nuestro Bulbasaur.
        printf ("\n (-o-)============================(-o-) ");
        printf ("\n || Bulbasaur te eligo a ti!!!       ||");
        printf ("\n  ==================================== ");
        Bulbasaur();
        pausa ();
      }
      return pokemonUsuario;
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

// Esta funcion no es mas que una amenaza hacia el jugador, para que comience la batalla.
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

// Movimientos de Charmander, cada movimiento le añade un plus de ataque a un ataque basico
// que se elige aleatoriamente
int movChar () {
  int ataque;
  printf ("\n\n\t(-o-)    Movimientos    (-o-)");
  printf ("\n\t =========================== ");
  printf ("\n\t||    1.- Cola latigo      ||");
  printf ("\n\t||    2.- Placaje          ||");
  printf ("\n\t||    3.- Ascuas           ||");
  printf ("\n\t||    4.- Mordisco         ||");
  printf ("\n\t =========================== ");
  printf ("\n\t||    0.- Descansar        ||");
  printf ("\n\t =========================== ");
  ataque = pedirNumero(0,4);
  return ataque;
}

// Imagen de Pokemon
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
  printf ("\n (-o-)================ Char! Char! Charmander! ============(-o-) ");
}

// Movimientos de Squirtle, al igual que el anterior se le añade un plus de ataque,
// ademas la opcion 0 "Descansar" nos da un extra de vida.
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

// Movimientos e imagen de bulbasur.
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
void Raichu() {
printf ("\n ");
printf ("\n                                        _,--\"\"`---...__ ");
printf ("\n                            _.---\"\"\"\"`-\'.   .-\"\"\"\'`-.._`-._ ");
printf ("\n                _,.-----.,-\"         .\". `-.           \"---`. ");
printf ("\n             _,\' _,.-..,\'__          `.\'  ,-`...._      ,\"\"\'\'`-. ");
printf ("\n           ,\' ,-\'     / (  .   ,-.       |    `.  `-._  .       `. ");
printf ("\n         ,\',-\"       /   `\"    `\"\'       \'      .    _`. \\ ");
printf ("\n       ,\',\'       ,-\'7--.                 `.__.\"|   ( ` `j ");
printf ("\n      \'.:--.    ,\'   |   .       |\\             \'    `--\' ");
printf ("\n     /.     | ,\'     |   |       `\'            . ");
printf ("\n     \'       |\',\".    |._,\'                     `      _.--\"\"\"\"\"-._ ");
printf ("\n    \'.          `-..\'    `.                      ,  \\  ,-\' _.-\"\"\"\"\"-. `. ");
printf ("\n     ` `                   F  -.                 /    ,\' .-\'          `  ` ");
printf ("\n      \\ `                 j     `.              ,-.   . /               . ` ");
printf ("\n         `.               |     .-`.           .  \'-.  V                 . ` ");
printf ("\n       `   `.      .      | .    \\  \\         j      \\/|                  \' . ");
printf ("\n        .    `.    |`.    |-.`._/`   .        |    ,\'  A                  | | ");
printf ("\n         \\     `. F   \\   |--`  \"._  |        `-.-\"   / .                 | | ");
printf ("\n          \\      -\'    `. |        `\"\'                  |                 F \' ");
printf ("\n           \\             `+`.                           |                / . ");
printf ("\n            \\              .-`                     .    j               / , ");
printf ("\n             \\              \\   `.               .\'    /               \' . ");
printf ("\n              \\       |`._   \\    `-.._        ,\'    ,\'              ,\'.\' ");
printf ("\n               \'      |   `.  `.       `<`\"\"\"\"\'    .\'             _,\'.\' ");
printf ("\n                `     |     `-. `._      )   `.     .          _.\'_.\' ");
printf ("\n                 `    |        `--/     /`-._  .     `.___..--\'_.\" ");
printf ("\n                  `   |          /     /._   `\"\"`.     `. _,.-\" ");
printf ("\n                   `  |         /     /   `--.....`.     `._ ");
printf ("\n                    ` |       ,\'     /              .\"\"\"\"\'  `. ");
printf ("\n                     `\'      , `-..,7                `    . `.`. ");
printf ("\n                            .       \'                 `.   \\  `v ");
printf ("\n                           j.  ,   /                    `.._L_.\' ");
printf ("\n                           || .   / ");
printf ("\n                           `\"-\'__/ ");
printf ("\n ");
printf ("\n (-o-)============================= Raichu! =============================(-o-) ");
}

void Onix() {
printf ("\n ");
printf ("\n                                                       _ ");
printf ("\n                                       ___            | | ");
printf ("\n                                   .-\"\'   `...._      | | ");
printf ("\n                      _,--\"\'-.   ,\' .           `.    | | ");
printf ("\n                    .\'       ,`,\'    \\            `.  | | ");
printf ("\n                  ,\'.      .\',\'       \\            | j  | ");
printf ("\n           __,..,\'   `----\"  `         \\       _..-+.`  |.. ");
printf ("\n        ,\'\"     .             \'._  ___...-._ ,\'     |   |  `--. ");
printf ("\n       /       _|              | `\"        .\'       |   |      `. ");
printf ("\n      /`  _.-`\'  ._..----\"\"`._ |         ,\'         |   |        . ");
printf ("\n     | .-\"         `-._    _,.\' `.     .\'          j    |         `. ");
printf ("\n  ,-\"\"\"--..._       |  \'`\"\"       `-../\\     _,\"\'\'\"|    |.._       ,| ");
printf ("\n /    \'.     `\"----,\'                 ` \'._,\'      |   j    `.   .\' | ");
printf ("\n/_.-\'\"  `-.___..-.\"                    \\ ,\'   \\    |   \'    | `.\'   \' ");
printf ("\n`                |                    _.\'          |  |,_   \'   `. / ");
printf ("\n .        _______|                 .-\'    |.       `. \'           | ");
printf ("\n  `...---\"     .-\'               .\'       | `.                 ,  \' ");
printf ("\n  ,\'._     _,-\"                  `        |  ,`.  ,  .    _.-\'|    `. ");
printf ("\n .    `\"\"-\'    `.                 \\       `.....`.     .-\',   |      . ");
printf ("\n |             _,|                 ._ --.        |     \'\"--...       \' ");
printf ("\n  `.--\"`.....-\" ,                    /\".`        |   |        _____,\' ");
printf ("\n    .       | .\'_                   /   \\        |  j       \"\'_,..\' ");
printf ("\n     /`-...-+\"   `.                 \'   .\'.__ -..\'  |_,..   ,\'  | ");
printf ("\n    \'          ____.                 \\  |    \"`-..___,....-.    \' ");
printf ("\n    .     _.\"\"\'   |                  `. .                 / .-\' ");
printf ("\n     `. .\'       .._                   \\ \\               / / ");
printf ("\n       `-._   _.'   `.                  \\.--......____ .\' / ");
printf ("\n         .\'`\"\"    .\'  .                  .            \'_.\' ");
printf ("\n         |       /    |____               `\"._     _,-\"      ,-\'\"\' ");
printf ("\n          `. _.,\'     |    `.                 `--\"\'       _.--,.\' ");
printf ("\n            `\'--.__,.\"       |                          ,\' .\' | ");
printf ("\n                  |   ,.._   |\"--._                  ,-+-.\'  / ");
printf ("\n                   `..\'    ``.\'   ,.`.     _..__.-\"\"\"-.__.\'\\\"\' ");
printf ("\n                      `----.,\"    \'   .--..\'   _..`-../:  _,\' ");
printf ("\n                             .    /  .\'  _.\'\\.-\"  |     \'-\" ");
printf ("\n                              \"--+--\"`..\'   |.   ,^.__,\' ");
printf ("\n                                       `---\"  `-\" ");
printf ("\n ");
printf ("\n (-o-)============================ Onix! ==========================(-o-) ");
}

void Charizard(){
printf ("\n ");
printf ("\n                   .\"-,.__ ");
printf ("\n                   `.     `.  , ");
printf ("\n                .--\'  .._,\'\"-\' `. ");
printf ("\n               .    .\'         `\' ");
printf ("\n              `.   /          ,\' ");
printf ("\n                `  \'--.   ,-\"\' ");
printf ("\n                 `\"`   |  \\ ");
printf ("\n                    -. \\, | ");
printf ("\n                     `--Y.\'      ___. ");
printf ("\n                          \\     L._, \\ ");
printf ("\n                _.,        `.   <  <\\                _ ");
printf ("\n              ,' '           `, `.   | \\            ( ` ");
printf ("\n           ../, `.            `  |    .\\`.           \\ \\_ ");
printf ("\n          ,\' ,..  .           _.,\'    ||\\l            )  \'\". ");
printf ("\n         , ,\'   \\           ,\'.-.`-._,\'  |           .  _._`. ");
printf ("\n       ,\' /      \\ \\        `\' \' `--/   | \\          / /   ..\\ ");
printf ("\n     .\'  /        \\ .         |\\__ - _ ,\'` `        / /     `.`. ");
printf ("\n     |  \'          ..         `-...-\"  |  `-\'      / /        . `. ");
printf ("\n     | /           |L__           |    |          / /          `. `. ");
printf ("\n    , /            .   .          |    |         / /             ` ` ");
printf ("\n   / /          ,. ,`._ `-_       |    |  _   ,-\' /               ` \\ ");
printf ("\n  / .           \\\"`_/. `-_ \\_,.  ,\'    +-\' `-\'  _,        ..,-.    \\`. ");
printf ("\n .  \'         .-f    ,\'   `    \'.       \\__.---\'     _   .\'   \'     \\ \\ ");
printf ("\n \' /          `.\'    l     .\' /          \\..      ,_|/   `.  ,\'`     L` ");
printf ("\n |\'      _.-\"\"` `.    \\ _,\'  `            \\ `.___`.\'\"`-.  , |   |    | \\ ");
printf ("\n ||    ,\'      `. `.   \'       _,...._        `  |    `/ \'  |   \'     .| ");
printf ("\n ||  ,\'          `. ;.,.---\' ,\'       `.   `.. `-\'  .-\' /_ .\'    ;_   || ");
printf ("\n || \'              V      / /           `   | `   ,\'   ,\' \'.    !  `. || ");
printf ("\n ||/            _,-------7 \'              . |  `-\'    l         /    `|| ");
printf ("\n . |          ,\' .-   ,\' ||               | .-.        `.      .\'     || ");
printf ("\n  `\'        ,\'    `\".\'    |               |    `.        \'. -.\'       `\' ");
printf ("\n           /      ,\'      |               |,\'    \\-.._,.\'/\' ");
printf ("\n           .     /        .               .       \\    .\'\' ");
printf ("\n         .`.    |         `.             /         :_,\'.\' ");
printf ("\n           \\ `...\\   _     ,\'-.        .\'         /_.-\' ");
printf ("\n            `-.__ `,  `\'   .  _.>----\'\'.  _  __  / ");
printf ("\n                 .\'        /\"\'          |  \"\'   \'_ ");
printf ("\n                /_|.-\'\\ ,\".             \'.\'`__\'-( \\ ");
printf ("\n                  / ,\"\'\"\\,\'               `/  `-.|\"  ");
printf ("\n ");
printf ("\n (-o-)=========================== Charizard! ============================(-o-) ");
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

// Esta funcion se utiliza en el momento de la batalla, y es la encarda de indicar
// que movimientos de ataque de los anteriormente mostrados se imprimira por pantalla,
// esto se hace con un simple switch e indicandole, el numero del pokemon elegido.
int movimientos(int pokemonUsuario) {
  switch (pokemonUsuario) {
    // Charmander
    case 0:
      movChar();
    break;
    // Squirtel
    case 1:
      movSquir();
    break;
    // Bulbasur
    case 2:
      movBulba();
    break;
  }
}

// Funcion Combate, es el bucle que da entido al juego, es la funcion mas compleja del programa.
// Para comenzar indicamos el pokemon que ha elegido el usuario, y al que le ha tocado a la maquina.
void Combate (int pokemonUsuario, int pokemonMaquina){
  // Establecemos unos turnos de ataque aleatorios para saber quien empieza.
  int turno = obtenerNumeroAleatorio(0,1);
  // Añadimos una cantidad de vida tanto nuestra como la del Dominguero, ademas de
  // una variable quitavida que ira restando en cada ataque enemigo una cantidad aleatoria.
  int vidaUsuario, vidaMaquina, quitavida;
  vidaUsuario = 100;
  vidaMaquina = 100;
  while (vidaUsuario > 0 && vidaMaquina > 0) {
    if (turno == 1) {
      quitavida = obtenerNumeroAleatorio(10,35);
      int ataque = movimientos(pokemonUsuario);
      // En es switch se suma el numero aleatorio obtenido a un numero fijo por
      // la eleccion de un ataque entre los diferentes movimientos.
      switch (ataque) {
        // En el caso, donde el pokemon "descansa", el numero aleatorio se suma
        // a la vida de nuestro pokemon.
        case 0:
          vidaUsuario = vidaUsuario + quitavida;
          break;
        case 1:
          quitavida = quitavida + 1;
          vidaMaquina = vidaMaquina - quitavida;
          break;
        case 2:
          quitavida = quitavida + 3;
          vidaMaquina = vidaMaquina - quitavida;
          break;
        case 3:
          quitavida = quitavida + 5;
          vidaMaquina = vidaMaquina - quitavida;
          break;
        case 4:
          quitavida = quitavida + 7;
          vidaMaquina = vidaMaquina - quitavida;
          break;
      }
      // Mostramos el daño realizado y la cantidad de vida que tenemos y la
      // que aun le queda a nuestro contrincante.
      printf ("\n\n (-o-)============ Tu turno ================(-o-)");
      printf ("\n || Tu pokemon tiene %d de vida.               ||",vidaUsuario);
      printf ("\n || Inflinqe un ataque de %d.                  ||",quitavida);
      printf ("\n || A Dominguero le quedan %d de vida.         ||",vidaMaquina);
      printf ("\n (-o-)======================================(-o-)");
      // Cambiamos el turno, para que juegue la maquina.
      turno = 0;
      // Hacemos una pausa para leer la informacion mostrada.
      pausa();
    } else {
      // Mostramos la vida que tiene, el daño que nos hacen, y la cantidad de vida
      // que tienen nuestro pokemon.
      quitavida = obtenerNumeroAleatorio(10,35);
      vidaUsuario = vidaUsuario - quitavida;
      printf ("\n\n (-o-)=========== Dominguero ===============(-o-)");
      printf ("\n || Dominguero tiene %d puntos de vida         ||",vidaMaquina);
      printf ("\n || Y hace un ataque de %d puntos.             ||",quitavida);
      printf ("\n || A tu pokemon le queda %d puntos de vida.   ||",vidaUsuario);
      printf ("\n (-o-)======================================(-o-)");
      // Volvemos a cambiar el turno al jugador.
      turno = 1;
      pausa();
    }
    // Estas son dos funciones basicas que nos muestran un mensaje por pantalla
    // al final del combate, cuando una de las dos vidas ha llegado a menos de 0.
  if (vidaUsuario <= 0) {
    perdedor();
    }
  if (vidaMaquina <=0) {
    ganador();
    }
  }
}
// Mensajes de victoria o derrota
void ganador(){
  printf ("\n\n (-o-)============= Victoria!!! ===============(-o-)");
  printf ("\n || Si puedes vencer a un Dominguero, no hay     ||");
  printf ("\n || nada que se te resista, enhorabuena.         ||");
  printf ("\n ||                                              ||");
  printf ("\n || Gracias por jugar :)                         ||");
  printf ("\n (-o-)========================================(-o-)");
  pausa();
}

void perdedor() {
  printf ("\n\n (-o-)============= Derrota!!! ===============(-o-)");
  printf ("\n || En el mundo pokemon aun te queda mucho que   ||");
  printf ("\n || aprender, mas suerte en la proxima partida.  ||");
  printf ("\n ||                                              ||");
  printf ("\n || Gracias por jugar :)                         ||");
  printf ("\n (-o-)========================================(-o-)");
  pausa();
}

// La funcion torneo se corresponde a este modo de juego, esta funcion
// es igual que la de combate, la unica diferencia es que se han añadido unos
// contadores de victorias, y que las partidas siempre van en el mismo orden,
// ya que en el modo torneo son 3 combates seguidos, ademas el nivel es mas
// dificil puesto que al escoger movimiento, no se añade nada al ataque.
void torneo(){
  // Presentacion de torneo.
  system ("cls");
  printf ("\n\n (-o-)=============== Torneo ================(-o-)");
  printf ("\n || Si te crees tan bueno como para desafiar a  ||");
  printf ("\n || los mejores, estas en el sitio adecuado.    ||");
  printf ("\n ||                                             ||");
  printf ("\n || Ya no hay vuelta atras, combatiras al       ||");
  printf ("\n || mejor de 3 combates contra el lider del     ||");
  printf ("\n || gimnasio: 'Chico de fuego'.                 ||");
  printf ("\n ||                                             ||");
  printf ("\n || Suerte amigo!                               ||");
  printf ("\n (-o-)=======================================(-o-)");
  pausa();
  system ("cls");
  int turno = 0;
  int contadorVidaUsuario, contadorVidaMaquina;
  int vidaUsuario, vidaMaquina, quitavida;
  contadorVidaUsuario = 3;
  contadorVidaMaquina = 3;
  int contadorCombates = 3;
  //Este bucle es que hace que el torneo acabe cuando no nos quedan vidas a nosotros o
  // a FireBoy.
  while (contadorVidaUsuario > 0 && contadorVidaMaquina > 0 ) {
    // Un if para controlar en que combate esta el bucle
    if (contadorCombates == 3) {
      vidaUsuario = 100;
      vidaMaquina = 100;
      printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
      printf ("\n || Estas muy lejos de tu casa chico, pero ya   ||");
      printf ("\n || que estas aqui, divirtamonos un rato...     ||");
      printf ("\n || Adelante Onix!!!                            ||");
      printf ("\n (-o-)=======================================(-o-)");
      Onix ();
      pausa();
      printf ("\n\n (-o-)=======================================(-o-)");
      printf ("\n || Empiezas con Bulbasaur.                     ||");
      printf ("\n (-o-)=======================================(-o-)");
      Bulbasaur();
      pausa();
      while (vidaUsuario > 0 && vidaMaquina > 0) {
        if (turno == 1) {
          printf ("\n Te toca a ti.");
          movBulba();
          quitavida = obtenerNumeroAleatorio(10,35);
          vidaMaquina = vidaMaquina - quitavida;
          printf ("\n\n (-o-)============ Tu turno ================(-o-)");
          printf ("\n || Tu pokemon tiene %d de vida.               ||",vidaUsuario);
          printf ("\n || Inflinqe un ataque de %d.                  ||",quitavida);
          printf ("\n || A Chico de fuego le quedan %d de vida.     ||",vidaMaquina);
          printf ("\n (-o-)======================================(-o-)");
          pausa();
          turno = 0;
          } else {
            quitavida = obtenerNumeroAleatorio(10,35);
            vidaUsuario = vidaUsuario - quitavida;
            printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
            printf ("\n || Chico de fuego tiene %d puntos de vida     ||",vidaMaquina);
            printf ("\n || Y hace un ataque de %d puntos.             ||",quitavida);
            printf ("\n || A tu pokemon le queda %d puntos de vida.   ||",vidaUsuario);
            printf ("\n (-o-)======================================(-o-)");
            pausa();
            turno = 1;
          }
        if (vidaUsuario <= 0) {
          printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
          printf ("\n || Jajaja! Ni si quiera has podido con el      ||");
          printf ("\n || primer combate. Espero que te gusten las    ||");
          printf ("\n || chispas. Adelante Raichu!!!                 ||");
          printf ("\n (-o-)=======================================(-o-)");
          contadorVidaUsuario = contadorVidaUsuario - 1;
          contadorCombates = contadorCombates - 1;
        }
        if (vidaMaquina <= 0){
          printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
          printf ("\n || Bueno, en el primer combate nunca me        ||");
          printf ("\n || esfuerzo. Preparate para las chispas.       ||");
          printf ("\n || Adelante Raichu!!!                          ||");
          printf ("\n (-o-)=======================================(-o-)");
          contadorVidaMaquina = contadorVidaMaquina - 1;
          contadorCombates = contadorCombates - 1;
        }
      }
      if (contadorCombates == 2) {
        Raichu();
        pausa();
        printf ("\n\n (-o-)=======================================(-o-)");
        printf ("\n || Eliges a Charmander.                        ||");
        printf ("\n (-o-)=======================================(-o-)");
        Charmander();
        pausa();
        vidaUsuario = 100;
        vidaMaquina = 100;
        while (vidaUsuario > 0 && vidaMaquina > 0) {
          if (turno == 1) {
            printf ("\n Te toca a ti.");
            movChar();
            quitavida = obtenerNumeroAleatorio(10,35);
            vidaMaquina = vidaMaquina - quitavida;
            printf ("\n\n (-o-)============ Tu turno ================(-o-)");
            printf ("\n || Tu pokemon tiene %d de vida.               ||",vidaUsuario);
            printf ("\n || Inflinqe un ataque de %d.                  ||",quitavida);
            printf ("\n || A Chico de fuego le quedan %d de vida.     ||",vidaMaquina);
            printf ("\n (-o-)======================================(-o-)");
            pausa();
            turno = 0;
            } else {
              quitavida = obtenerNumeroAleatorio(10,35);
              vidaUsuario = vidaUsuario - quitavida;
              printf ("\n\n (-o-)=========== Chico de fuego ===========(-o-)");
              printf ("\n || Chico de fuego tiene %d puntos de vida     ||",vidaMaquina);
              printf ("\n || Y hace un ataque de %d puntos.             ||",quitavida);
              printf ("\n || A tu pokemon le queda %d puntos de vida.   ||",vidaUsuario);
              printf ("\n (-o-)======================================(-o-)");
              pausa();
              turno = 1;
            }
          if (vidaUsuario <= 0) {
            printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
            printf ("\n || Esto se pone interesante no crees,          ||");
            printf ("\n || no pensaba usarlo, pero le vendra bien un   ||");
            printf ("\n || poco de ejercicio.                          ||");
            printf ("\n (-o-)=======================================(-o-)");
            contadorVidaUsuario = contadorVidaUsuario - 1;
            contadorCombates = contadorCombates - 1;
          }
          if (vidaMaquina <= 0){
            printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
            printf ("\n || Buen combate, pocos llegan hasta aqui,      ||");
            printf ("\n || pero menos son los que consiguen ganar a:   ||");
            printf ("\n || Charizard!!!                                ||");
            printf ("\n (-o-)=======================================(-o-)");
            contadorVidaMaquina = contadorVidaMaquina - 1;
            contadorCombates = contadorCombates - 1;
          }
        }
      }
      if(contadorCombates == 1){
        Charizard();
        pausa();
        printf ("\n\n (-o-)=======================================(-o-)");
        printf ("\n || Eliges a Squirtle.                        ||");
        printf ("\n (-o-)=======================================(-o-)");
        Squirtle();
        pausa();
        vidaUsuario = 100;
        vidaMaquina = 100;
        while (vidaUsuario > 0 && vidaMaquina > 0) {
            if (turno == 1) {
              printf ("\n Te toca a ti.");
              movSquir();
              quitavida = obtenerNumeroAleatorio(10,35);
              int quitavidaCharizar = obtenerNumeroAleatorio(10,40);
              vidaMaquina = vidaMaquina - quitavida;
              printf ("\n\n (-o-)============ Tu turno ================(-o-)");
              printf ("\n || Tu pokemon tiene %d de vida.               ||",vidaUsuario);
              printf ("\n || Inflinqe un ataque de %d.                  ||",quitavida);
              printf ("\n || A Chico de fuego le quedan %d de vida.     ||",vidaMaquina);
              printf ("\n (-o-)======================================(-o-)");
              pausa();
              turno = 0;
              } else {
                int quitavidaCharizar = obtenerNumeroAleatorio(10,40);
                quitavida = obtenerNumeroAleatorio(10,35);
                vidaUsuario = vidaUsuario - quitavidaCharizar;
                printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
                printf ("\n || Chico de fuego tiene %d puntos de vida     ||",vidaMaquina);
                printf ("\n || Y hace un ataque de %d puntos.             ||",quitavidaCharizar);
                printf ("\n || A tu pokemon le queda %d puntos de vida.   ||",vidaUsuario);
                printf ("\n (-o-)======================================(-o-)");
                pausa();
                turno = 1;
              }
            if (vidaUsuario <= 0) {
              printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
              printf ("\n || Esto se ha acabado chico, ya te dije        ||");
              printf ("\n || nadie vence a mi Charizard.                 ||");
              printf ("\n (-o-)=======================================(-o-)");
              contadorVidaUsuario = contadorVidaUsuario - 1;
              contadorCombates = contadorCombates - 1;
            }
            if (vidaMaquina <= 0){
              printf ("\n\n (-o-)=========== Chico de fuego ============(-o-)");
              printf ("\n || No puede ser! Mi Charizar derrotado por,    ||");
              printf ("\n || por un... en fin he de admitir que lo has   ||");
              printf ("\n || hecho bien.                                 ||");
              printf ("\n (-o-)=======================================(-o-)");
              contadorVidaMaquina = contadorVidaMaquina - 1;
              contadorCombates = contadorCombates - 1;
            }
          }
        }
        // Cuando el contador de combates llega a 0 se decide quien a ganado
        if (contadorCombates == 0){
          if (contadorVidaUsuario < contadorVidaMaquina) {
            perdedorTorneo();
          } else {
            ganadorTorneo();
          }
        }
      }
    }
  }
void ganadorTorneo () {
  printf ("\n\n (-o-)=============== Chico de fuego ===============(-o-)");
  printf ("\n || Enhorabuena! Eres de los pocos que ha conseguido   ||");
  printf ("\n || vencerme, estas preparado para ir al proximo       ||");
  printf ("\n || gimnasio pokemon.                                  ||");
  printf ("\n ||                                                    ||");
  printf ("\n || Podras encontrarlo en la isla de JAVA, aunque      ||");
  printf ("\n || dicen que el programador aun no ha terminado de    ||");
  printf ("\n || compilarlo, suerte en tu camino.                   ||");
  printf ("\n (-o-)==============================================(-o-)");
  pausa();
}
void perdedorTorneo () {
  printf ("\n\n (-o-)=============== Chico de fuego ===============(-o-)");
  printf ("\n || Ya sabia yo que por mucho que lo intentaras no     ||");
  printf ("\n || conseguiras vencerme, ha estado bien, no te        ||");
  printf ("\n || puedo dar la medalla del gimansio, pero toma,      ||");
  printf ("\n || un 'pin' pa ti!                                    ||");
  printf ("\n ||                                                    ||");
  printf ("\n || Vuelve cuando estes preparado.                     ||");
  printf ("\n (-o-)==============================================(-o-)");
  pausa();
}
