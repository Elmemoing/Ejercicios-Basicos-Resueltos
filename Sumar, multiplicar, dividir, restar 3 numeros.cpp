#include<iostream>
using namespace std;


int main() {
	int a,b,c;
	float div;
	int mult;
	float rest;
	int suma;
	cout << "Ingrese valor 1" << endl;
	cin >> a;
	cout << "Ingrese valor 2" << endl;
	cin >> b;
	cout << "Ingrese valor 3" << endl;
	cin >> c;
	suma = a+b+c;
	mult = a*b*c;
	div = a/b;
	rest = a-b-c;
	cout << "La suma de los 3 valores es, " << suma << endl;
	cout << "La multiplicacion de los 3 valores es, " << mult << endl;
	cout << "La division del primer valor con el segundo es, " << div << endl;
	cout << "La resta de los tres valores ingresados es, " << rest << endl;
	return 0;
}

