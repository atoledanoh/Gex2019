#include "Temp.h"

void Temp::setC(double t) {
	tempK = t - 273.15;
}

void Temp::setK(double t) {
	tempK = t;
}

void Temp::setF(double t) {
	tempK = (t + 459.67) * 5.0 / 9.0;
}

double Temp::getC() const {
	return tempK + 273.15;
}

double Temp::getK() const {
	return tempK;
}

double Temp::getF() const {
	return tempK * 9 / 5 - 459.67;
}

Temp Temp::add(const Temp other) const {
	Temp result;
	result.tempK = tempK + other.tempK;
	return result;
}

Temp Temp::sub(const Temp other) const {
	Temp result;
	result.tempK = tempK - other.tempK;
	return result;
}