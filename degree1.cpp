#include <iostream>
using namespace std;

int main(){
    float f;
    float c = ((f-32.0)*5.0/9.0);
    cout << "Enter degree in Fahrenheit: ";
    cin  >> f;
    cout << "The degree in Celsius is: " << c <<endl;
    return 0;
}