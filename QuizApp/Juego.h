#include <iostream>
#include "Alternativas.h"
using std::cout;

void Juego()
{
	system("cls");
	//Le ponemos el rango de 1 a 2, porque solo tenemos 2 alternativas
	srand(time(NULL));
	int aleatorio = 1 + rand() % 4;

	switch (aleatorio)
	{
	case 1:
		Alternativa1(); break;
	case 2:
		Alternativa2(); break;
	case 3:
		Alternativa3(); break;
	case 4:
		Alternativa4(); break;
	}
}