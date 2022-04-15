#include "myclass.h"
#include <string>

void Circle::SetValues(const double &radius, const double &height){
    if(radius > 0 && height > 0)
    {
        this->radius = radius;
        this->height = height;
    }
    else
    {
        cout << "Setting errors. All values are set to 1." << endl;
        this->radius = 1;
        this->height = 1;
    }
    CalculateGirthAreaVolume();
}

void Circle::CalculateGirthAreaVolume()
{
    girth = radius * 2 * M_PI;
    area = radius * radius * M_PI;
    volume = area * height;
}

void Circle::GetInfo()
{
    cout << name << endl;
    cout << radius << endl;
    cout << height << endl;
    cout << girth << endl;
    cout << area << endl;
    cout << volume << endl;
    cout << "---" << endl;
}
