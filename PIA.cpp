#include <iostream>
#include <cstdlib>

using namespace std;

 int main() {
	
	int a, b;

	while (a != 3) {
		cout << "1) Compra de un video juego \n";
		cout << "2) Renta de un video juego \n";
		cout << "3) Salir \n";
		cin >> a;

		int b;
		cin >> b;
		switch (b) {

		 case 1:
			system("cls");
			cout << "Desea comprar un videojuego \n";
			system("pause");
			system("cls");
			break;

		 case 2:
			system("cls");
			cout << "Desea rentar un videojuego \n";
			cout << "Desea comprar un videojuego \n";
			system("pause");
			system("cls");

		 default:
			if (a < 1, a > 3) {
				cout << "ERROR \n";
				system("cls");
			
			}
			break;
		}

	
	}
 } 