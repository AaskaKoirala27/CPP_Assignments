//WAP to find the volume of the cube, cuboid and cylinder using function 
//overloading and default arguments.


#include <iostream>
using namespace std;
double volume(double side) {
    return side * side * side;
}
double volume(double length, double breadth, double height = 1) {
    return length * breadth * height;
}
double volume(double radius, double height, bool) {
    const double PI = 3.14159;
    return PI * radius * radius * height;
}int main() {
    double side, length, breadth, height, radius;
    cout << "Enter the side of the cube: ";
    cin >> side;
    cout << "Volume of Cube: " << volume(side) << endl;
    cout << "Enter the length and breadth of the cuboid: ";
    cin >> length >> breadth;
    cout << "Volume of Cuboid: " << volume(length, breadth) << endl;
    cout << "Enter the height of the cuboid: ";
    cin >> height;
    cout << "Volume of Cuboid (with height): " << volume(length, breadth, height) << endl;
    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of Cylinder: " << volume(radius, height, true) << endl;
    return 0;
}
