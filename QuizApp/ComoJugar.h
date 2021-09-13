/*
 *Este archivo muestra como jugar, aparte de que va a poder abrir la documentacion oficial (https://github.com/Diego1223/QuizApp/tree/master/QuizApp) 
*/
#include <iostream>

#define AMIN 97
#define AMAY 65
#define BMIN 98
#define BMAY 66


void ComoJugar()
{
	//La usaremos para escuchar una letra 
	int tecla;
	system("cls");
	//Titulo
	gotoxy(55, 3); cout << "Como jugar" << '\n';

	//Parrafo
	gotoxy(10, 8);
	cout << "El juego conciste en que tu, vas a contestar 8 preguntas aleatorias, relacionadas con la informatica.";
	gotoxy(18, 9);
	cout << "Si contestas mal mas de 5 veces, se acabara el juego y se mostraran tus resultados\n";

	gotoxy(8, 25);
	cout << "Presiona la tecla A para abrir github";
	gotoxy(75, 25);
	cout << "Presiona la tecla B para Jugar";
	tecla = _getch();

	if ((tecla == AMIN) || (tecla == AMAY))
	{
		system("start https://github.com/Diego1223/QuizApp");
	}
	if ((tecla == BMIN) || (tecla == BMAY))
	{
		Juego();
	}
}