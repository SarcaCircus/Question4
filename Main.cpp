#include <stdio.h>
#include <iostream>
#include "Question4.h"

using namespace std;

void main() {
	double x=25.0;
	double y = 80.0;
	double here = convertToFahrenheit(x);
	double there = convertToCelsius(y);

	cout << x << " degrees celsius is " << here << " degrees fahrenheit." << endl;
	cout << y << " degrees fahrenheit is " << there << " degrees celsius." << endl;
    
}