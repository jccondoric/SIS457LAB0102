#include<iostream>
using namespace std;
class volver_a_imprimir {

public:
	void seleccionar();
};

int main() {
	volver_a_imprimir asd;
	asd.seleccionar();
	return 0;
}

void volver_a_imprimir::seleccionar() {
	char repetir = 'S';
	while (repetir != 'N') {
		cout << "\t\t\t\t\t\t Biografia Personal" << endl;
		cout << "\t\t\t\t Hola mi nombre es Jhon Carlos Condori Cuevas" << endl;
		cout << "\t\t\t\t estudiante de la carrera de Ing. de Sistemas" << endl;
		cout << "\t\t\t\t naci en Potosi pero radico en Sucre,sali del" << endl;
		cout << "\t\t\t\t Colegio Bernando Monteagudo." << endl;
		if (repetir != 'N') {
			repetir = ' ';
		}
		while (repetir != 'S' && repetir != 'N') {
			cout << "\nQuiere volver a imprimir S/N ????" << endl;
			cin >> repetir;
			repetir = toupper(repetir);

		}
	}
}