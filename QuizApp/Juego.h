#include <iostream>
#include <string.h>
using namespace std;

struct Logica
{
	//Al indice 0 del arreglo preguntas, le corresponde el indice 0 del arreglo respuesta
	//Puedes ir a el archivo prueba.cpp y checar la logica
	std::string preguntas[50] = {
		"Que es un compilador?",
		"Lenguaje que consiste de ceros y unos",
		"Lenguaje de programacion creado en 1979 por Bjarne Stroustrup",
		"Lenguaje de programacion creado en 1996 por la empresa Sun Microsystems"
	};

	std::string respuestas[50] = {
		"Software que traduce un programa de un lenguaje de alto nivel a un lenguaje maquina",
		"Lenguaje binario",
		"Lenguaje C++",
		"Lenguaje java"
	};
}pregunta, respuesta;

