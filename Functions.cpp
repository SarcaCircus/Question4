
#include "Question4.h"

double convertToFahrenheit(double celsius) {

	double fahrenheit = celsius * 1.8 + 32.0;
	return fahrenheit;
}
double convertToCelsius(double fahrenheit) {
	return (fahrenheit - 32.0) / 1.8;
}