/*
 * Esta es la primer prueba que hicimos
 */

//#include <iostream>
//#include <string.h>
//#include <time.h>
//using namespace std;
//
//#define LEN 50
//
//struct logica
//{
//    std::string preguntas[LEN] = {
//        "pregunta 1",
//        "pregunta 2",
//        "pregunta 3",
//        "pregunta 4",
//        "pregunta 5",
//        "pregunta 6",
//        "pregunta 7",
//        "pregunta 8"
//    };
//
//    std::string respuestas[LEN] = {
//        "respuesta 1",
//        "respuesta 2",
//        "respuesta 3",
//        "respuesta 4",
//        "respuesta 5",
//        "respuesta 6",
//        "respuesta 7",
//        "respuesta 8"
//    };
//} preguntar, respuesta;
//
//
//void EscojerRespuesta(int indiceRespuesta)
//{
//    int respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
//    int respuestasAleatorias[5];
//
//    //Genera un numero aleatorio entre 0 y 8, esto para cada inciso
//    respuestaAleatoriaA = 0 + rand() % 8;
//    respuestaAleatoriaB = 0 + rand() % 8;
//    respuestaAleatoriaC = 0 + rand() % 8;
//    respuestasAleatorias[3] = respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
//
//
//    for (int i = 0; i < 3; i++)
//    {
//
//        //Este bloque if, hace que en todas las opciones este el inciso correcto
//        if (respuestasAleatorias[i] != indiceRespuesta)
//        {
//            int escojerRespuesta;
//            escojerRespuesta = 1 + rand() % 8;
//            switch (escojerRespuesta)
//            {
//            case 1:
//                respuestaAleatoriaA = indiceRespuesta;
//                break;
//            case 2:
//                respuestaAleatoriaB = indiceRespuesta;
//                break;
//            case 3:
//                respuestaAleatoriaC = indiceRespuesta;
//                break;
//            }
//        }
//
//        //Estos 3 if's sirven para que las respuestas aleatorias no se repitan
//        /* Ejemplo:
//         * Verifica si la respuesta aleatoria A es igual a la respuesta aleatoria B
//         * Si es asi, crea un numero aleatorio para la nueva respuesta
//         * Despues verifica que ese numero no sea igual que el la respuesta anterior
//         * si es correcto, haz el cambio
//         */
//
//        if (respuestaAleatoriaA == respuestaAleatoriaB)
//        {
//            int nuevaRespuestaAleatoria = 0 + rand() % 8;
//            if (respuestaAleatoriaA != nuevaRespuestaAleatoria)
//            {
//                respuestaAleatoriaB = nuevaRespuestaAleatoria;
//            }
//        }
//        if (respuestaAleatoriaB == respuestaAleatoriaC)
//        {
//            int nuevaRespuestaAleatoria = 0 + rand() % 8;
//
//            if (respuestaAleatoriaB != nuevaRespuestaAleatoria)
//            {
//                respuestaAleatoriaC = nuevaRespuestaAleatoria;
//            }
//        }
//
//        if (respuestaAleatoriaC == respuestaAleatoriaA)
//        {
//            int nuevaRespuestaAleatoria = 0 + rand() % 8;
//
//            if (respuestaAleatoriaC != nuevaRespuestaAleatoria)
//            {
//                respuestaAleatoriaC = nuevaRespuestaAleatoria;
//            }
//        }
//    }
//
//    cout << "a.- " << respuesta.respuestas[respuestaAleatoriaA] << endl;
//    cout << "b.- " << respuesta.respuestas[respuestaAleatoriaB] << endl;
//    cout << "c.- " << respuesta.respuestas[respuestaAleatoriaC] << endl;
//}
//
//
//int main()
//{
//    int preguntaAleatoria;
//    int indiceDeRespuesta;
//    srand(time(NULL));
//
//    //Solo van a ser 8 preguntas cada vez que tenga que jugar
//    for (int i = 0; i < 8; i++)
//    {
//        preguntaAleatoria = 0 + rand() % 8;
//        indiceDeRespuesta = preguntaAleatoria;
//
//
//        cout << preguntar.preguntas[preguntaAleatoria] << endl;
//
//        cout << "\n";
//
//        cout << "Eligue una opcion" << endl;
//
//        EscojerRespuesta(indiceDeRespuesta);
//        cout << "\n";
//    }
//    system("pause");
//    return EXIT_SUCCESS;
//}









/*
 * // Segunda prueba //
 * Esta es la segunda prueba que hicimos
 * fecha -> 22/09/2021
 */

//#include <iostream>
//#include <time.h>
//#include "Logica.h" //En este archivo se encuentran las preguntas y las respuestas
//using std::cout;
//using std::cin;
//	
//void Respuestas(int indiceRespuesta)
//{
//	int respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
//	int respuestasAleatorias[5];
//		
//	//Genera un numero aleatorio entre 0 y 17, esto para cada inciso
//	respuestaAleatoriaA = 0 + rand() % 16;
//	respuestaAleatoriaB = 0 + rand() % 16;
//	respuestaAleatoriaC = 0 + rand() % 16;
//	//Almacenamos los datos de cada inciso
//	respuestasAleatorias[3] = respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
//	
//	for (int i = 0; i < 3; i++) 
//	{
//		//Este bloque if hace que en cada pregunta este la respuesta correcta
//		if (respuestasAleatorias[i] != indiceRespuesta)
//		{
//			int escojerRespuesta = 1 + rand() % 3; 
//				
//			switch (escojerRespuesta)
//			{
//			case 1:
//				respuestaAleatoriaA = indiceRespuesta;
//				break;
//			case 2:
//				respuestaAleatoriaB = indiceRespuesta;
//				break;
//			case 3:
//				respuestaAleatoriaC = indiceRespuesta;
//				break;
//			}
//		}
//	}
//		
//	/*
//	 * Estos 3 if's sirven para que las opciones no se repitan
//	 * Verifica que la opcion actual no sea igual que la opcion siguiente
//	 * Si es igual, crea un nuevo numero aleatorio, y verifica que el nuevo numero sea diferente a la opcion anterior
//	 * Si es diferente, procede a cambiar el valor de la siguiente variable a la nueva opcion 
//	 */
//	
//	int nuevaRespuestaAleatoria;
//	
//	if (respuestaAleatoriaA == respuestaAleatoriaB)
//	{
//		nuevaRespuestaAleatoria = 0 + rand() % 16;
//	
//		if (respuestaAleatoriaA != nuevaRespuestaAleatoria)
//		{
//			respuestaAleatoriaB = nuevaRespuestaAleatoria;
//		}
//	}
//	
//	if (respuestaAleatoriaB == respuestaAleatoriaC)
//	{
//		nuevaRespuestaAleatoria = 0 + rand() % 16;
//	
//		if (respuestaAleatoriaB != nuevaRespuestaAleatoria)
//		{
//				respuestaAleatoriaC = nuevaRespuestaAleatoria;
//		}
//	}
//	
//	if (respuestaAleatoriaC == respuestaAleatoriaA)
//	{
//		nuevaRespuestaAleatoria = 0 + rand() % 16;
//	
//		if (respuestaAleatoriaC != nuevaRespuestaAleatoria)
//		{
//			respuestaAleatoriaA = nuevaRespuestaAleatoria;
//		}
//	}
//		
//	cout << "a.- " << respuesta.respuestas[respuestaAleatoriaA] << '\n';
//	cout << "b.- " << respuesta.respuestas[respuestaAleatoriaB] << '\n';
//	cout << "c.- " << respuesta.respuestas[respuestaAleatoriaC] << '\n';
//}
//	
//void Juego()
//{
//	system("cls");
//	int preguntaAleatoria;
//	int indiceDeRespuesta;
//	srand(time(NULL));
//	
//	//Van a ser 8 preguntas las que se van a realizar por cada juego
//	for (int i = 1; i <= 8; i++)
//	{
//		//genera un numero aleatorio entre 0 y 8
//		preguntaAleatoria = 0 + rand() % 16;
//		indiceDeRespuesta = preguntaAleatoria;
//			
//	
//		cout << i << ". " << pregunta.preguntas[preguntaAleatoria] << '\n';
//	
//		cout << '\n';
//		cout << "Eligue una opcion: " << '\n';
//		Respuestas(indiceDeRespuesta);
//		cout << '\n' << '\n';
//	}
//	system("pause>0");
//}