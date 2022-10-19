#include "Point.h"
#include <iostream>
using namespace std;


bool Point::Init(int f, int s)
{
	
		numerator = f;
		denominator = s;
		
		
		return true;	
}



void Point::Display() const
{
	cout << "fraction = " << numerator << "/" << denominator << endl;

}

void Point::Read()
{
	int f;
	int s;
	
	do
	{
		cout << "Enter a valid value:" << endl;
		cout << " numerator = "; cin >> f;
		cout << " denominator = "; cin >> s;
		
		
	} while (!Init(f, s ));

}



Point::Point(const Point& d) {
	this->numerator = d.numerator;
	this->denominator = d.denominator;
}
Point::~Point() {
	cout << "Destructor" << endl;
}
Point::Point(int numerator ,int denominator ) {
	this->numerator = numerator;
	this->denominator = denominator;
	
}


void Point::reduced(){
	int b = numerator;
	while (b > 1) {
		if ((numerator > denominator || numerator == denominator) && numerator % denominator == 0)
			cout << "reduced fraction: " << numerator / denominator << endl;

		else if (numerator > denominator) {
			cout << "reduced fraction: " << numerator / denominator << "("
				<< (numerator / b) - (denominator / b) << "/"
				<< denominator / b << ")" << endl;
		}
		else
			cout << "reduced fraction: " << numerator / b << "/" << denominator / b << endl;
		break;
		
	}

		
	
}
double Point::product() {
	return 1.*numerator / denominator;
}


