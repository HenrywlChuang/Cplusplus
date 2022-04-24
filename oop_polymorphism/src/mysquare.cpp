#include "mysquare.h"
#include <string>

Square::Square()
{
    edge = 0;
    SetEdge(edge);
}

Square::~Square(){}

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

void Square::ShowInfo()
{
    cout << "---Override---" << endl;
    cout << "Area: " << area << endl;
    cout << "Girth: " << girth << endl;
}