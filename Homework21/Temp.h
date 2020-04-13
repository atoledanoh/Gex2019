#pragma once
class Temp
{
public:
	void setC(double);
	void setK(double);
	void setF(double);

	double getC() const;
	double getK() const;
	double getF() const;

	Temp add(const Temp other) const;
	Temp sub(const Temp other) const;

private:
	double tempK{ 0.0 };
};

