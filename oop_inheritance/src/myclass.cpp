#include "myclass.h"
#include <string>

double Shape::GetArea()
{
    return area;
}

double Shape::GetGirth()
{
    return girth;
}

void Shape::SetArea(const double &area)
{
    this->area = area;
}

void Shape::SetGirth(const double &girth)
{
    this->girth = girth;
}

void Shape::GetInfo()
{
    cout << "Area: " << area << endl;
    cout << "Girth: " << girth << endl;
}

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

void Square::SetEdge(const double &edge)
{
    if(edge > 0)
    {
        this->edge = edge;
    }
    else
    {
        cout << "Setting errors. Edge is set to 1." << endl;
        this->edge = 1;
    }
    SetArea(edge * edge);
    SetGirth(edge * 4);
}