#ifndef MYSHAPE_H
#define MYSHAPE_H

#include <iostream>
#include <cmath>

using namespace std;

// Abstract
class Shape
{
    public:
        Shape();
        virtual ~Shape();

        double GetArea();
        double GetGirth();
        void GetInfo();

        virtual void ShowInfo() = 0;
    
    protected:
        void SetArea(const double &area);
        void SetGirth(const double &girth);
        double area;
        double girth;

    private:
};

#endif