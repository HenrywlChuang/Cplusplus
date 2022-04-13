#include <iostream>
#include <cmath>

using namespace std;

class Circle{

    public:
        void SetValues(const double &radius, const double &height);
        void GetInfo();
        Circle CopyCircle(Circle &circle);
        Circle * CopyCircle(Circle *circle);
        Circle & CopyCircle_R(Circle &circle);
        Circle *& CopyCircle_PR(Circle *&circle);
        void CompareCircle(const Circle &circle);

    private:
        double radius;
        double height;
        double girth;
        double area;
        double volume;

};
