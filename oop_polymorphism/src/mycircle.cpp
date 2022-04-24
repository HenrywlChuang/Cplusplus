#include "mycircle.h"
#include <string>

Circle::Circle()
{
    radius = 0;
}

Circle::~Circle(){}

void Circle::SetRadius(const double &radius)
{
    if(radius > 0)
    {
        this->radius = radius;
    }
    else
    {
        cout << "Setting errors." << endl;
        this->radius = 1;
    }
    SetArea(radius * radius * M_PI);
    SetGirth(radius * 2 * M_PI);
}

void Circle::ShowInfo()
{
    cout << "---Override---" << endl;
    cout << "Area: " << area << endl;
    cout << "Girth: " << girth << endl;
}