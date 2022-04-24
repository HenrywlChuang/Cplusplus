#include "myshape.h"
#include <string>

Shape::Shape()
{
    area = 0;
    girth = 0;
}

Shape::~Shape(){}

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

// void Shape::ShowInfo()
// {
//     cout << "Area: " << area << endl;
//     cout << "Girth: " << girth << endl;
// }