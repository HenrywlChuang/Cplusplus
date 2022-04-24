#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include <iostream>
#include <cmath>
#include "myshape.h"

using namespace std;

class Circle : public Shape
{
    public:
        Circle();
        ~Circle();

        void SetRadius(const double &radius);

        virtual void ShowInfo();

    private:
        double radius;
};

#endif