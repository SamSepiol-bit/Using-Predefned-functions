

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num = 2.5;

	//square root funtion
	double squareRoot = sqrt(num);
	cout << "Square root of "<< num << ": " << squareRoot << endl;

	//power function 
	double power = pow(num, 2);
	cout << num << " raised to the power of 2: " << power << endl;

	//Trigonometric functions
	double sine = sin(num);
	cout << "Sine of " << num << ": " << sine << endl;

	return 0;

}

