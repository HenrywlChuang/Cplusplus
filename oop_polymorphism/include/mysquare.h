#ifndef MYSQUARE_H
#define MYSQUARE_H

#include <iostream>
#include <cmath>
#include "myshape.h"

using namespace std;

class Square : public Shape
{
    public:
        Square();
        ~Square();
        
        void SetEdge(const double &edge);

        virtual void ShowInfo();

    private:
        double edge;
};

#endif