#include <iostream>
#include <cmath>

using namespace std;

struct Circle{
    double radius;
    double height;
    double girth;
    double area;
    double volume;
};

void SetValues(Circle &object_circle, const double &radius, const double &height);
void GetInfo(Circle &object_circle);
struct Circle SetASameCircle(Circle &target_circle, const Circle &original_circle);
void CompareCircle(const Circle &object_circle, const Circle &target_circle);
