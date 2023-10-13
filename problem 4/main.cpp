#include <iostream>
using namespace std;

int main () {

float radius;
    const float pi = 3.14;
    float area;
    
    cout << "Enter the radius: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}