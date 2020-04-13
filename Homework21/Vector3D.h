#pragma once
#include <string>

struct Vector3D {
	Vector3D(double x, double y, double z);

	double			lenght();
	double			dist(Vector3D other);
	Vector3D		add(const Vector3D other) const;
	Vector3D		sub(const Vector3D other) const;
	std::string		toString();

	double x;
	double y;
	double z;
	};

