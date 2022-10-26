#include <iostream>
#include<conio.h>
#include <windows.h>
using namespace std;
int main() {
	char carac, next;
	short contador=0;
	cout << "--------------------------------\n";
	cout << "PROGRAMA PARA MEDIR LOS REFLEJOS\n";
	cout << "--------------------------------\n";
	cout << "\n Ingrese un caracter :> ";
	cin >> carac;
	cout << "\nAhora debes estar atento!\nSalir con la tecla X\n\n";

	while (true) {
		cout << carac;
		contador++;
		Sleep(10);
		if (_kbhit()) {
			next = _getch();
			cout << "\n\nSu reflejo despues de " << contador << " impresiones\n";
			contador = 0;
			if (next == 'x' || next == 'X') {
				cout << "\n\tSaliendo...\n"; exit(0);
			}
			system("pause>>null");
		}
	}
	return 0;
}
