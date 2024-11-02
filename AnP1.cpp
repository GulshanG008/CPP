#include <iostream>
using namespace std;

int main()
{
    float l, b;
    cout << "Enter Length: ";
    cin >> l;
    cout << "Enter Breadth: ";
    cin >> b;
    cout << "The area of the Rectangle is: " << l * b << endl;
    cout << "The Perimeter of the Rectangle is: " << 2 * (l * b) << endl;
    return 0;
}