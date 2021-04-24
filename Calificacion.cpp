#include<iostream>
using namespace std;
int main() {
	string apellido;
	string asig;
	int asist;
	int cedula;
	int dia_clases;
	string direccion;
	string nacimiento;
	string nombre;
	int nota;
	int notaf;
	int notap1;
	int notap2;
	float porcentaje;
	cout << "ingrese nombre" << endl;
	cin >> nombre;
	cout << "Ingrese apellido" << endl;
	cin >> apellido;
	cout << "Ingrese cedula" << endl;
	cin >> cedula;
	cout << "Ingrese fecha de nacimiento" << endl;
	cin >> nacimiento;
	cout << "Ingrese direccion" << endl;
	cin >> direccion;
	cout << "Nombre de la asignatura" << endl;
	cin >> asig;
	cout << "Dias de clases" << endl;
	cin >> dia_clases;
	cout << "Ingrese asistencia del alumno" << endl;
	cin >> asist;
	cout << "Ingrese nota de la primera parcial de 25 puntos" << endl;
	cin >> notap1;
	cout << "Ingrese nota de la seguna parcial de 25 puntos" << endl;
	cin >> notap2;
	cout << "Ingrese nota del examen final de 50 puntos" << endl;
	cin >> notaf;
	nota = notap1+notap2+notaf;
	cout << "Nota final del alumno, " << nota << endl;
	porcentaje = (asist*100)/dia_clases;
	cout << "Porcentaje de asistencia es, " << porcentaje << endl;
	if (nota<=60) {
		cout << "Desaprobado" << endl;
	} else {
		if (nota<60 && nota<=70) {
			if (porcentaje>=70) {
				cout << "Aprobado con nota 2" << endl;
			} else {
				cout << "Desaprovado por falta de asistencia" << endl;
			}
		} else {
			if (nota<70 && nota<=80) {
				if (porcentaje>=70) {
					cout << "Aprobado con nota 3" << endl;
				} else {
					cout << "Desaprovado por falta de asistencia" << endl;
				}
			} else {
				if (nota<80 && nota<=90) {
					if (porcentaje>=70) {
						cout << "Aprobado con nota 4" << endl;
					} else {
						cout << "Desaprovado por falta de asistencia" << endl;
					}
				} else {
					if (porcentaje>=70) {
						cout << "Aprobado con nota 5" << endl;
					} else {
						cout << "Desaprovado por falta de asistencia" << endl;
					}
				}
			}
		}
	}
	return 0;
}

