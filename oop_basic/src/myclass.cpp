#include "myclass.h"

void Circle::SetValues(const double &radius, const double &height){
    this->radius = radius;
    this->height = height;
    this->girth = radius * 2 * M_PI;
    this->area = radius * radius * M_PI;
    this->volume = this->area * height;
}

void Circle::GetInfo()
{
    cout << radius << endl;
    cout << height << endl;
    cout << girth << endl;
    cout << area << endl;
    cout << volume << endl;
    cout << "---" << endl;
}

Circle Circle::CopyCircle(Circle &circle)
{
    circle.radius = radius;
    circle.height = height;
    circle.girth = girth;
    circle.area = area;
    circle.volume = volume;
    return circle;
}

Circle * Circle::CopyCircle(Circle *circle)
{
    circle->radius = radius;
    circle->height = height;
    circle->girth = girth;
    circle->area = area;
    circle->volume = volume;
    return circle;
}

Circle & Circle::CopyCircle_R(Circle &circle)
{
    circle.radius = radius;
    circle.height = height;
    circle.girth = girth;
    circle.area = area;
    circle.volume = volume;
    return circle;
}

Circle *& Circle::CopyCircle_PR(Circle *&circle)
{
    circle->radius = radius;
    circle->height = height;
    circle->girth = girth;
    circle->area = area;
    circle->volume = volume;
    return circle;
}

void Circle::CompareCircle(const Circle &circle)
{
    if(this->volume == circle.volume)        cout << "They are the same." << endl;
    else if(this->volume < circle.volume)    cout << "Compared one is larger." << endl;
    else cout << "This is larger." << endl;
}
