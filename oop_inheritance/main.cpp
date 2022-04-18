#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char **argv)
{
    Circle c1;
    c1.SetRadius(10);
    c1.GetInfo();

    Square s1;
    s1.GetInfo();

    return 0;
}