#include <Windows.h>

//Esta funcion la vamos a usar para que no se vea el cursor en el menu principal
void OcultarCursor()
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	//Creamos una variable para la estructura CONSOLE_CURSOR_INFO
	//La cual nos ayuda a modificar la visibilidad del cursor y el tamano, Ejemplo:
	//cci.dwSize = 50; -> Nos sirve para poner el tamano del cursor
	//cci.bVisible = FALSE; //No se ve el cursor
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = FALSE;
	//Sirve para manipular el cursor 
	SetConsoleCursorInfo(hCon, &cci);
}
