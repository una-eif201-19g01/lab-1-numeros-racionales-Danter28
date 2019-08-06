#include "Racionales.h"
using std::cout;
using std::endl;

int main() {
	Racionales fraccionA(20, 8);
	Racionales fraccionB(10, 4);
	Racionales fraccionAux;

	cout << "\nTutorial -Números Racionales-\n" << endl;

	cout << "SIMPLIFICACIÓN de Fracción A: " << fraccionA.obtenerString() << endl;
	Racionales::simplificarFraccion(fraccionA);
	cout << "RESULTADO: " << fraccionA.obtenerString() << endl;

	cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << endl;
	Racionales::simplificarFraccion(fraccionB);
	cout << "RESULTADO: " << fraccionB.obtenerString() << endl;

	cout << "\nSUMAR FRACCIONES" << endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << endl;

	return 0;
}