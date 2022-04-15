#include <iostream>
#include <cmath>

using namespace std;

class Circle{

    public:
        Circle()
        {
            name = "no name";
            radius = 1;
            height = 1;
            SetValues(radius, height);
        }
        Circle(const int &radius, const int &height)
        {
            name = "no name";
            this->radius = radius;
            this->height = height;
            SetValues(radius, height);
        }
        Circle(const string &name, const int &radius, const int &height)
        {
            this->name = name;
            this->radius = radius;
            this->height = height;
            SetValues(radius, height);
        }
        void SetValues(const double &radius, const double &height);
        void GetInfo();

    private:
        string name;
        double radius;
        double height;
        double girth;
        double area;
        double volume;
        void CalculateGirthAreaVolume();

};
