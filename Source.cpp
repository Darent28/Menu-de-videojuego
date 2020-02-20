#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int opcion = 0;

	while (opcion != 3) {
		cout << "1) Compra de un video juego \n";
		cout << "2) Renta de un video juego \n";
		cout << "3) Salir \n";
		cout << "Seleciona una opcion: ";
		cin >> opcion;

		switch (opcion) {

		case 1:
			system("cls");
			cout << "Desea comprar un videojuego \n";
			system("pause");
			system("cls");
			break;

		case 2:
			system("cls");
			cout << "Desea rentar un videojuego \n";
			system("pause");
			system("cls");

		default:
			if (opcion < 1 && opcion > 3) {
				cout << "ERROR \n";
				system("cls");
			}
			break;
		}
	}
	system("pause");
	return 0;
}