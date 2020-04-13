#include "Vector3D.h"
#include <cmath>
#include <sstream>

Vector3D::Vector3D(double x, double y, double z) :
x(x),
y(y),
z(z)
{}

double			Vector3D::lenght() {
	return sqrt(x * x + y * y + z * z);
}

double			Vector3D::dist(Vector3D other) {
	//return (other.sub(*this)).lenght();
	return (sqrt(
		(x - other.x) * (x - other.x) +
		(x - other.y) * (x - other.y) +
		(x - other.z) * (x - other.z)
	));
}

Vector3D		Vector3D::add(const Vector3D other) const {
	Vector3D result(0, 0, 0);
	result.x = x + other.x;
	result.y = y + other.y;
	result.z = z + other.z;
	return result;
}

Vector3D		Vector3D::sub(const Vector3D other) const {
	Vector3D result(0, 0, 0);
	result.x = x - other.x;
	result.y = y - other.y;
	result.z = z - other.z;
	return result;
}

std::string		Vector3D::toString() {
	std::stringstream ss;
	ss << "(" << x << ", " << y << ", " << z << ")";
	return ss.str();
}

double x;
double y;
double z;