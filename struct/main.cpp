#include <iostream>
#include "mystruct.h"

using namespace std;

int main(int argc, char **argv)
{
    struct Circle circle_a;
    struct Circle circle_b;
    // pointer struct
    struct Circle * circle_c = new Circle;
    
    SetValues(circle_a, 10, 20);
    SetValues(*circle_c, 20, 30);
    CompareCircle(*circle_c, SetASameCircle(circle_b, circle_a));
    GetInfo(circle_a);
    GetInfo(circle_b);
    GetInfo(*circle_c);

    delete circle_c;

    return 0;
}