#include <iostream>
#include <string.h>

#define LEN 50

struct Logica
{
	//Al indice 0 del arreglo preguntas, le corresponde el indice 0 del arreglo respuesta
	//Puedes ir a el archivo prueba.cpp y checar la logica

	//Son 17 preguntas 
	std::string preguntas[LEN] = {
		"Que es un compilador?",
		"Lenguaje que consiste de ceros y unos",
		"Lenguaje de programacion creado en 1979 por Bjarne Stroustrup",
		"Lenguaje de programacion creado en 1996 por la empresa Sun Microsystems",
		"Lenguaje conocido por tener una sintaxis sencilla, desarrollado por Guido van Rossum",
		"Que es un paradigma de programacion?",
		"Concepto de POO",
		"lenguajes de programacion utilizados para crear paginas web (Front-end)",
		"Siglas de CPU",
		"Software utilizado para virtualizar sistemas operativos",
		"Sistema operativo creado por Apple",
		"Sistema operativo creado por microsoft",
		"Linux es...",
		"Es uno de los editores de texto mas antiguos",
		"Lenguajes en el que fue creado el kernel de linux",
		"Significado de \"IDE\"",
		"C/C++ es un lenguaje...",
	};

	std::string respuestas[LEN] = {
		"Software que traduce un programa de un lenguaje de alto nivel a un lenguaje maquina",
		"Lenguaje binario",
		"Lenguaje C++",
		"Lenguaje java",
		"Python",
		"Modelo o un estilo de programación que nos da unas guías sobre cómo trabajar con él",
		"Se basa en el concepto de clases y objetos",
		"Javascript",
		"Unidad central de procesamiento",
		"Virtualbox",
		"MacOS",
		"Windows",
		"Un kernel",
		"VIM",
		"C, C++, assembly",
		"De proposito general",
	};
}pregunta, respuesta;

