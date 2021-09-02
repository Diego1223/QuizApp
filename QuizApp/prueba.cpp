#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

struct logica
{
    std::string preguntas[50] = {
        "pregunta 1",
        "pregunta 2",
        "pregunta 3",
        "pregunta 4"
    };

    std::string respuestas[50] = {
        "respuesta 1",
        "respuesta 2",
        "respuesta 3",
        "respuesta 4"
    };

} preguntar, respuesta;


void EscojerRespuesta(int indiceRespuesta)
{
    int respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;
    int escojerRespuesta;
    int respuestasAleatorias[3];

    respuestaAleatoriaA = 0 + rand() % 3;
    respuestaAleatoriaB = 0 + rand() % 3;
    respuestaAleatoriaC = 0 + rand() % 3;
    respuestasAleatorias[4] = respuestaAleatoriaA, respuestaAleatoriaB, respuestaAleatoriaC;

    for (int i = 0; i < 3; i++)
    {
        if (respuestasAleatorias[i] != indiceRespuesta)
        {
            escojerRespuesta = 1 + rand() % 3;
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
            break;
        }
    }


    cout << "a.- " << respuesta.respuestas[respuestaAleatoriaA] << endl;
    cout << "b.- " << respuesta.respuestas[respuestaAleatoriaB] << endl;
    cout << "c.- " << respuesta.respuestas[respuestaAleatoriaC] << endl;

}
int main()
{
    int preguntaAleatoria;
    int indiceDeRespuesta;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        preguntaAleatoria = 0 + rand() % 3;
        indiceDeRespuesta = preguntaAleatoria;

        cout << preguntar.preguntas[preguntaAleatoria] << endl;

        cout << "\n";

        cout << "Eligue una opcion" << endl;

        EscojerRespuesta(indiceDeRespuesta);
        cout << "\n";
    }
    system("pause");
    return EXIT_SUCCESS;
}