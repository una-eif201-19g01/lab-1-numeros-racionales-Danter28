//
// Created by Danilo Alvarado Arce on 04/08/2019.
//

#ifndef RACIONALES
#define RACIONALES
#include <iostream>
#include<sstream>
#include<cmath>
using std::string;
class Racionales{
private:
    int num;
    int den;
    static int calcularMCD(int num, int den);
public:
    Racionales();
    Racionales(int, int);
    static void simplificarFraccion(Racionales&);
    string obtenerString();

   Racionales sumFraccion(Racionales fraccion);
   Racionales resFraccion(Racionales fraccion);
   Racionales multFraccion(Racionales fraccion);
   Racionales divFraccion(Racionales fraccion);
   Racionales eleFraccion(int n,Racionales fraccion);
   bool equiXSimp(Racionales&,Racionales&);
   bool equiXmult(Racionales&,Racionales&);
   int GetNum() ;
   int GetDen() ;
   void SetDen(int den);
   void SetNum(int num);

};

#endif RACIONALES
