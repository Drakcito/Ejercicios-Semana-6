#include<iostream>
using namespace std;

int main(){
	int n;
	do{
		cout << "Ingrese un numero: "; 
		cin >> n;
	} while (n < 4 || n >= 15);

	for (int i = 0; i <= n - 1; i++){
		for (int j = i; j <= n - 1; j++){
			cout << " ";
		}
		if (i % 2 == 0){
			cout << "_";
		}
		else{
			cout << "|";
		}
		
		for (int j = 1; j <= 2 * i - 1; j++){
			cout << " ";
		}
		
		if (i >= 1)
			if (i % 2 == 0){
				cout << "_";
			}
			else{
				cout << "|";
			}
						
		for (int j = i; j <= n - 1; j++){
			cout << " ";
		}

		cout << endl;
	}
}
