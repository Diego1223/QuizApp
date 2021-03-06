#include <iostream>
#include <conio.h>
#include "gotoxy.h"
#include "Juego.h"
#include "Ocursor.h"
#include "ComoJugar.h"
using namespace std;

//Estos son los codigos ASCII correspondientes a cada tecla
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13


//Esta funcion nos permite hacer mas menus, en el caso de que necesitemos mas en el futuro
int CuerpoMenu(const char* titulo, const char* opciones[], int numeroOpciones)
{
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;

	do {
		system("cls");

		gotoxy(20, 3 + opcionSeleccionada); cout << "==>";

		gotoxy(30, 2); cout << titulo;

		for (int i = 0; i < numeroOpciones; i++)
		{
			gotoxy(25, 4 + i); cout << i + 1 << ".- " << &*(opciones[i]);
		}

		do {
			OcultarCursor();
			tecla = _getch();
		} while ((tecla != TECLA_ARRIBA) && (tecla != TECLA_ABAJO) && (tecla != ENTER));

		switch (tecla)
		{
		case TECLA_ARRIBA:
			opcionSeleccionada--;

			if (opcionSeleccionada == 0)
			{
				opcionSeleccionada = numeroOpciones;
			}
			break;

		case TECLA_ABAJO:
			opcionSeleccionada++;

			if (opcionSeleccionada > numeroOpciones)
			{
				opcionSeleccionada = 1;
			}
			break;

		case ENTER:
			repite = false;
			break;
		}
	} while (repite);


	return opcionSeleccionada;
}




void MenuPrincipal()
{
	bool repite = true;
	int opcion;

	const char* titulo = "Menu Principal";
	const char* opciones[3] = {
		"Jugar", "Como se juega", "Salir"
	};
	int numeroOpciones = 3;
	do {
		opcion = CuerpoMenu(titulo, opciones, numeroOpciones);
		switch (opcion)
		{
			case 1:
				Juego();
				break;
			case 2:
				ComoJugar();
				break;
			case 3:
				repite = false;
				break;
		}
	} while (repite);
}