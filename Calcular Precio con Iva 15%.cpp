#include<iostream>
using namespace std;

int main() {
	int costo;
	float iva, total;
	cout << "Ingrese costo de producto" << endl;
	cin >> costo;
	iva = costo*0.15;
	total = costo+iva;
	cout << "El costo total del producto es: $" << total << endl;
	return 0;
}
