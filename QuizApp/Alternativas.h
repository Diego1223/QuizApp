#include <iostream>
#include "Logica.h"
using std::cout; 
using std::cin;

//Solo van a ser 8 preguntas cada vez que se inicie el juego

/*
 *Esta estructura nos va a permitir ahorrar codigo
 *Primera se pasa el numero de la pregunta
 *La pregunta, la cual va a ser un indice de la estructura Logica y el array preguntas
 *Los respectivos indices de cada pregunta
*/

/*
	Estructura(1, 0, 5, 0, 14) ````
	Estructura(2, 1, 2, 9, 1) ````
	Estructura(3, 2, 10, 3, 2) ````
	Estructura(4, 3, 3, 4, 2) ````
	Estructura(5, 4, 2, 16, 4) ````	
	Estructura(6, 5, 5, 9, 16) ````
	Estructura(7, 6, 6, 16, 4) ````
	Estructura(8, 7, 1, 13, 7) ````
	Estructura(9, 8, 8, 2, 10) ````
	Estructura(10, 9, 10, 9, 5) ````
	Estructura(11, 10, 10, 4, 3) ````
	Estructura(12, 11, 0, 2, 11) ````
	Estructura(13, 12, 7, 12, 4) ````
	Estructura(14, 13, 8, 1, 13) ````
	Estructura(15, 14, 2, 14, 4) ````
	Estructura(16, 15, 8, 16, 15) ````
	Estructura(17, 16, 6, 16, 3) ````	
*/
void Estructura(int Npregunta, int Indicepregunta, int IrespuestasA, int IrespuestaB, int IrespuestaC)
{
	cout << Npregunta << ". " << pregunta.preguntas[Indicepregunta] << '\n' << '\n';

	cout << "a) " << respuesta.respuestas[IrespuestasA] << '\n';
	cout << "b) " << respuesta.respuestas[IrespuestaB] << '\n';
	cout << "c) " << respuesta.respuestas[IrespuestaC] << '\n';
	cout << "=> ";

	cout << "\n\n";
}

void Alternativa1()
{
	//Pregunta en el indice 1
	Estructura(1, 1, 4, 1, 6);

	//Pregunta en el indice 5
	Estructura(2, 5, 5, 3, 9);

	//Pregunta en el indice 2
	Estructura(3, 2, 10, 3, 2);

	//Pregunta en el indice 12
	Estructura(4, 12, 7, 12, 4);

	//Pregunta en el indice 0
	Estructura(5, 0, 5, 0, 14);

	//Pregunta en el indice 8
	Estructura(6, 8, 8, 2, 10);

	//Pregunta en el indice 16
	Estructura(7, 16, 6, 16, 3);
	
	//Pregunta en el indice 
	Estructura(8, 10, 10, 4, 3);
	cin.get();
}

void Alternativa2()
{
	//Pregunta en el indice 0
	Estructura(1, 0, 5, 0, 14);

	//Pregunta en el indice 3
	Estructura(2, 3, 3, 4, 2);

	//Pregunta en el indice 14
	Estructura(3, 14, 2, 14, 4);

	//Pregunta en el indice 9
	Estructura(4, 9, 10, 9, 5);
	
	//Pregunta en el indice 4
	Estructura(5, 4, 2, 16, 4);
	
	//Pregunta en el indice 1;
	Estructura(6, 1, 2, 9, 1);

	//Pregunta en el indice 10
	Estructura(7, 10, 10, 4, 3);

	//Pregunta en el indice 16
	Estructura(8, 16, 6, 16, 3);

	cin.get();
}

void Alternativa3()
{
	//Pregunta en el indice 14
	Estructura(1, 14, 2, 14, 4);

	//Pregunta en el indice 11
	Estructura(2, 11, 0, 2, 11);
	
	//Pregunta en el indice 15
	Estructura(3, 15, 8, 16, 15);
	
	//Pregunta en el indice 15
	Estructura(4, 13, 8, 1, 13);
	
	//Pregunta en el indice 3
	Estructura(5, 3, 3, 4, 2);
	
	//Pregunta en el indice 6
	Estructura(6, 6, 6, 16, 4);

	//Pregunta en el indice 4
	Estructura(7, 4, 2, 16, 4);

	//Pregunta en el indice 7
	Estructura(8, 7, 1, 13, 7);
	cin.get();
}


void Alternativa4()
{
	//Pregunta en el indice 9
	Estructura(1, 9, 10, 9, 5);

	//Pregunta en el indice 7
	Estructura(2, 7, 1, 13, 7);

	//Pregunta en el indice 1
	Estructura(3, 1, 2, 9, 1);

	//Pregunta en el indice 0
	Estructura(4, 0, 5, 0, 14);

	//Pregunta en el indice 14
	Estructura(5, 14, 2, 14, 4);
	
	//Pregunta en el indice 16
	Estructura(6, 16, 6, 16, 3);

	//Pregunta en el indice 3
	Estructura(7, 3, 2, 3, 1);

	//Pregunta en el indice 8
	Estructura(8, 8, 8, 2, 10);
	cin.get();
}