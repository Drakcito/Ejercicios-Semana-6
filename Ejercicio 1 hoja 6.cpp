#include <iostream>
using namespace std;

void menu() {
    cout << "Dibujar figura\n";
    cout << "-----------------\n";
    cout << "[1]Dibujar un cuadrado\n";
    cout << "[2]Dibujar un triangulo\n";
    cout << "[3]Salir\n";
    cout << "Ingrese una opcion: ";

}
void Dibujar_Cuadrado() {
    int nro_cuadrado = 1;
    int n;
    do {
        cout << "Ingresar el valor de N: ";
        cin >> n;
    } while (n<4||n>6);
    while (nro_cuadrado <= n) {
        for (int filas = 1; filas <= n; filas++) {
            for (int espacios = 1; espacios <= nro_cuadrado * 4; espacios++)cout << " ";
            for (int columnas = 1; columnas <= n; columnas++) {
                if (filas == 1 || filas == n || columnas == 1 || columnas == n) {
                    cout << "*";
                }
                else {
                    if (filas == 2 && columnas == 2) {
                        cout << nro_cuadrado;
                    }
                    else {
                        cout << " ";
                    }
                }
            }
            cout << "\n";
        }
        nro_cuadrado++;
    }
}
void Dibujar_Triangulo() {
	int n;
    do
    {
        cout << "Ingrese el valor N: ";
        cin >> n;
    } while (n < 4 || n> 6);

    for (int nro = 1; nro <= n; nro++){
        for (int fila = 1; fila <= n; fila++){
            for (int espacio = 1; espacio <= nro * 4; espacio++) cout << " ";
            for (int columna = 1; columna <= n; columna++){
                if (fila == n || columna == 1 || fila == columna){
                    cout << "*";
                }
                else
                {
                    if (fila == 3 && columna == 2){
                        cout << nro;
                    }
                    else{
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}

int main() {
    int opcion;

    menu();
    cin >> opcion;

    switch (opcion){
    case 1: Dibujar_Cuadrado(); break;
    case 2: Dibujar_Triangulo(); break;
    case 3:exit(0);
    default: cout << "Opcion Incorrecta.";
        break;
    }

}
