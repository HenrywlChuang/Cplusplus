#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char **argv)
{
    Circle circle_a;
    Circle circle_b;
    Circle circle_c(20, 20);
    Circle circle_d(-15, 6);
    circle_a.SetValues(10,10);
    circle_a.GetInfo();
    circle_b.SetValues(-10, 20);
    circle_b.GetInfo();
    circle_c.GetInfo();
    circle_d.GetInfo();
    
    Circle circle_e("circle", 2, 2);
    circle_e.GetInfo();

    return 0;
}