#include <iostream>
#include <time.h>
#include "Logica.h" //En este archivo se encuentran las preguntas y las respuestas
using std::cout;
using std::cin;
	
void Respuestas(int indiceRespuesta)
{
	int respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
	int respuestasAleatorias[5];
		
	//Genera un numero aleatorio entre 0 y 17, esto para cada inciso
	respuestaAleatoriaA = 0 + rand() % 16;
	respuestaAleatoriaB = 0 + rand() % 16;
	respuestaAleatoriaC = 0 + rand() % 16;
	//Almacenamos los datos de cada inciso
	respuestasAleatorias[3] = respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
	
	for (int i = 0; i < 3; i++) 
	{
		//Este bloque if hace que en cada pregunta este la respuesta correcta
		if (respuestasAleatorias[i] != indiceRespuesta)
		{
			int escojerRespuesta = 1 + rand() % 3; 
				
			switch (escojerRespuesta)
			{
			case 1:
				respuestaAleatoriaA = indiceRespuesta;
				break;
			case 2:
				respuestaAleatoriaB = indiceRespuesta;
				break;
			case 3:
				respuestaAleatoriaC = indiceRespuesta;
				break;
			}
		}
	}
		
	/*
	 * Estos 3 if's sirven para que las opciones no se repitan
	 * Verifica que la opcion actual no sea igual que la opcion siguiente
	 * Si es igual, crea un nuevo numero aleatorio, y verifica que el nuevo numero sea diferente a la opcion anterior
	 * Si es diferente, procede a cambiar el valor de la siguiente variable a la nueva opcion 
	 */
	
	int nuevaRespuestaAleatoria;
	
	if (respuestaAleatoriaA == respuestaAleatoriaB)
	{
		nuevaRespuestaAleatoria = 0 + rand() % 16;
	
		if (respuestaAleatoriaA != nuevaRespuestaAleatoria)
		{
			respuestaAleatoriaB = nuevaRespuestaAleatoria;
		}
	}
	
	if (respuestaAleatoriaB == respuestaAleatoriaC)
	{
		nuevaRespuestaAleatoria = 0 + rand() % 16;
	
		if (respuestaAleatoriaB != nuevaRespuestaAleatoria)
		{
				respuestaAleatoriaC = nuevaRespuestaAleatoria;
		}
	}
	
	if (respuestaAleatoriaC == respuestaAleatoriaA)
	{
		nuevaRespuestaAleatoria = 0 + rand() % 16;
	
		if (respuestaAleatoriaC != nuevaRespuestaAleatoria)
		{
			respuestaAleatoriaA = nuevaRespuestaAleatoria;
		}
	}
		
	cout << "a.- " << respuesta.respuestas[respuestaAleatoriaA] << '\n';
	cout << "b.- " << respuesta.respuestas[respuestaAleatoriaB] << '\n';
	cout << "c.- " << respuesta.respuestas[respuestaAleatoriaC] << '\n';
}
	
void Juego()
{
	system("cls");
	int preguntaAleatoria;
	int indiceDeRespuesta;
	srand(time(NULL));
	
	//Van a ser 8 preguntas las que se van a realizar por cada juego
	for (int i = 1; i <= 8; i++)
	{
		//genera un numero aleatorio entre 0 y 8
		preguntaAleatoria = 0 + rand() % 16;
		indiceDeRespuesta = preguntaAleatoria;
			
	
		cout << i << ". " << pregunta.preguntas[preguntaAleatoria] << '\n';
	
		cout << '\n';
		cout << "Eligue una opcion: " << '\n';
		Respuestas(indiceDeRespuesta);
		cout << '\n' << '\n';
	}
	system("pause>0");
}