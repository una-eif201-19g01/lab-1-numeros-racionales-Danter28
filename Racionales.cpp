//
// Created by dante on 04/08/2019.
//
#include <iostream>
#include "Racionales.h"

//constructor sin parametros;
Racionales::Racionales(){
    SetNum(0);
    SetDen(1);
}
Racionales::Racionales(int n, int d): num(n),den(d){}
int Racionales::calcularMCD(int num, int den){
    int res;
	if (den == 0) { res = num; }
	else { res = calcularMCD(den, num%den); }
    return res;
}
void Racionales::simplificarFraccion(Racionales &f) {
    if (f.GetNum() != 0) {
    int numeroMCD = calcularMCD(abs(f.GetNum()), f.GetDen());
    int numerador = f.GetNum() / numeroMCD;
    int denominador = f.GetDen() / numeroMCD;
    f.SetNum(numerador);
    f.SetDen(denominador);
}

}

Racionales Racionales::sumFraccion(Racionales fraccion) {
    Racionales resultado;
    resultado.SetNum(
            GetNum() * fraccion.GetDen() +
            GetDen() * fraccion.GetNum());
    resultado.SetDen(GetDen() * fraccion.GetDen());
    simplificarFraccion(resultado);
    return resultado;
}
Racionales Racionales::resFraccion(Racionales fraccion) {
    Racionales resultado;
    resultado.SetNum(
            GetNum() * fraccion.GetDen() -
            GetDen() * fraccion.GetNum());
    resultado.SetDen(GetDen() * fraccion.GetDen());
    simplificarFraccion(resultado);
    return resultado;
}
Racionales Racionales::multFraccion(Racionales fraccion) {
    Racionales resultado;
    resultado.SetNum(GetNum() *  fraccion.GetNum());
    resultado.SetDen(GetDen() * fraccion.GetDen());
    simplificarFraccion(resultado);
    return resultado;
}
Racionales Racionales::divFraccion(Racionales fraccion) {
    Racionales resultado;
    resultado.SetNum(GetNum() * fraccion.GetDen());
    resultado.SetDen(GetDen() * fraccion.GetNum());
    simplificarFraccion(resultado);
    return resultado;
}
Racionales Racionales::eleFraccion(int n, Racionales fraccion) {
    Racionales resultado=fraccion;
    while(n-1>=0){
		resultado = resultado.multFraccion(fraccion);
    }
    simplificarFraccion(resultado);
    return resultado;
}
bool Racionales::equiXSimp(Racionales &fraca,Racionales &fracb) {
	simplificarFraccion(fraca);
	simplificarFraccion(fracb);
	if ((fraca.GetNum() == fracb.GetNum()) && (fraca.GetDen() == fracb.GetDen()))  return true;
	return false;
	
}
bool Racionales::equiXmult(Racionales &fraca, Racionales &fracb) {
	Racionales resultado;
	resultado.SetNum(GetDen() * fracb.GetNum());
	resultado.SetDen(GetNum() * fracb.GetDen());
	if (resultado.GetNum() == resultado.GetDen())return true;
	return false;
}

string Racionales::obtenerString() {
	std::stringstream ss;
   ss<<"resultado: "<< GetNum()<<"/"<< GetDen();
    return ss.str();
}

int Racionales::GetNum(){
    return num;
}

void Racionales::SetNum(int numerador) {
    Racionales::num = numerador;
}

int Racionales::GetDen(){
    return den;
}

void Racionales::SetDen(int denominador) {
    Racionales::den = denominador;
}
