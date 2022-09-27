#include <iostream>
using namespace std;

int main()  {
    float radius;
    float pi = 3.14159;

    cout << "Insert radius of the circle: ";
    cin >> radius;
    float area = pi*(radius*radius);

    cout << "The area of the circle is " << area;

}