#include <iostream>

class ComplexNumber
{
private:
	double real;
	double imaginary;

public:
	void setNumber(double realPart, double imaginaryPart)
	{
		real = realPart;
		imaginary = imaginaryPart;
	}

	void getNumber(double& realPart, double& imaginaryPart) const
	{
		realPart = real;
		imaginaryPart = imaginary;
	}
};

int main()
{
	ComplexNumber number;
	number.setNumber(3.0, 4.0);

	double realPart;
	double imaginaryPart;
	number.getNumber(realPart, imaginaryPart);

	std::cout << "Complex number: " << realPart << " + "
			  << imaginaryPart << "i\n";
	return 0;
}
