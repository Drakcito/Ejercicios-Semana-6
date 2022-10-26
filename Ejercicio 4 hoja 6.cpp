#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n < 3 || n>10);
	
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "  ";
		}
		if(i>0) cout << "* ";
		for (int j = 0; j < (i*2)-1; j++) {
			cout << "  ";
		}
		cout << "* ";
		cout << "\n";
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "  ";
		}
		cout << "* ";
		for (int j = i; j < ((n * 2) - i - 3); j++) {
			cout << "  ";
		}
		if (i < n - 1) cout << "* ";
		cout << "\n";
	}
	return 0;
}
