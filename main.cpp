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

	cout << "\nRESTAR FRACCIONES" << endl;
	fraccionAux = fraccionA.restFraccion(fraccionB);
	cout << "RESULTADO: " << fraccionA.obtenerString() << " - " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << endl;

	cout << "\nMULTIPLICAR FRACCIONES" << endl;
	fraccionAux = fraccionA.multFraccion(fraccionB);
	cout << "RESULTADO: " << fraccionA.obtenerString() << " X " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << endl;

	cout << "\nDIVIDIR FRACCIONES" << endl;
	fraccionAux = fraccionA.divFraccion(fraccionB);
	cout << "RESULTADO: " << fraccionA.obtenerString() << " / " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << endl;

	cout << "\nELEVAR FRACCION" << endl;
	fraccionAux = fraccionA.eleFraccion(3,fraccionA);
	cout << "RESULTADO: " << fraccionA.obtenerString() << " ^ 3" <<
		" = " << fraccionAux.obtenerString() << endl;

	cout << "\nEQUIVALENCIAS ENTRE FRACCIONES POR SIMPLIFICACION" << endl; {
		if (fraccionAux.equiXSimp(fraccionA, fraccionB))
			cout << fraccionA.obtenerString() << " y " << fraccionB.obtenerString() << " Si son equivalentes " << endl;
		else
			cout << fraccionA.obtenerString() << " y " << fraccionB.obtenerString() << " No son equivalentes" << endl;
	}

	cout << "\nEQUIVALENCIAS ENTRE FRACCIONES POR MULTIPLICACION EN CRUZ" << endl; {
		if (fraccionAux.equiXmult(fraccionA, fraccionB))
			cout << fraccionA.obtenerString() << " y " << fraccionB.obtenerString() << " Si son equivalentes " << endl;
		else
			cout << fraccionA.obtenerString() << " y " << fraccionB.obtenerString() << " No son equivalentes" << endl;
	}


	return 0;
}