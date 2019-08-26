// This class converts temperature between Celsius and Fahrenheit.
// It may be used by assigning a value to either Celsius or Fahrenheit 
// and then retrieving the other value, or by calling the ToCelsius or
// ToFahrenheit methods directly.
//
// References:
//     https://www.mathsisfun.com/temperature-conversion.html
//     https://en.wikibooks.org/wiki/C%2B%2B_Programming

#include <iostream>

using namespace std;

class Temperature {
    public:
        double getCelsius(void);
        void setCelsius(double value);
        double getFahrenheit(void);
        void setFahrenheit(double value);
        double toCelsius(double fahrenheit);
        double toFahrenheit(double celsius);
    
    private:
        double celsius;
        double fahrenheit;
};

double Temperature::getCelsius(void) {
    return celsius;
}

void Temperature::setCelsius(double value) {
    celsius = value;
    fahrenheit = toFahrenheit(celsius);
}

double Temperature::getFahrenheit(void) {
    return fahrenheit;
}

void Temperature::setFahrenheit(double value) {
    fahrenheit = value;
    celsius = toCelsius(fahrenheit);
}
    
double Temperature::toCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double Temperature::toFahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}

// This program creates instances of the Temperature class to convert Celsius 
// and Fahrenheit temperatures.
//
// References:
//     https://www.mathsisfun.com/temperature-conversion.html
//     https://en.wikibooks.org/wiki/C%2B%2B_Programming

int main() {
    Temperature temp1;
    temp1.setCelsius(100.0);
    cout << "temp1.celsius = " << temp1.getCelsius() << endl;
    cout << "temp1.fahrenheit = " << temp1.getFahrenheit() << endl;
    cout << endl;
    
    Temperature temp2;
    temp2.setFahrenheit(100.0);
    cout << "temp2.fahrenheit = " << temp2.getFahrenheit() << endl;
    cout << "temp2.celsius = " << temp2.getCelsius() << endl;
}
