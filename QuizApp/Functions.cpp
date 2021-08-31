#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

void Preguntar()
{
	//Crea un numero aleatorio entre 0 y 2
	int aleatorio;
	srand(time_t(NULL));
	aleatorio = 0 + rand() % 2;
}