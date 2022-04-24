#include <iostream>
#include "myshape.h"
#include "mysquare.h"
#include "mycircle.h"

using namespace std;

int main(int argc, char **argv)
{
    Circle c1;
    c1.SetRadius(10);
    c1.GetInfo();
    c1.ShowInfo();  // override function

    Square s1;
    s1.GetInfo();
    s1.ShowInfo();  // override function

    return 0;
}