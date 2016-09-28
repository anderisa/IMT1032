#include <iostream>
#include <string>

using namespace std;

class Shape {
private:
    std::string shapeName; //private for this class, cannot be changed in derived classes
protected:
    float radius;         //these variables can be changes by derived classes
    float width;
    float height;
public:
    Shape() : std::string("NULL"), float(0.0), float(0.0), float(0.0) { }           //constructor with no arguments
    Shape(std::string n, float w, float h) : std::string(n), float(w), float(h) { } //constructor without radius
    Shape(std::string n, float r, float h) : std::string(n), float(r), float(h) { } //constructor with radius
    Shape(std::string n, float r) : std::string(n), float(r);

    float calculateArea(Shape);
};

Shape Shape::calculateArea(Shape s);

int main() {
    Shape circle("Circle", 14.3F);
}