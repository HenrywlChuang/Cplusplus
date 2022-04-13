#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char **argv)
{
    Circle circle_A;
    Circle circle_B;
    Circle * p_circle_C = new Circle;
    circle_A.SetValues(10, 10);
    circle_A.CopyCircle(circle_B);
    circle_B.CopyCircle(*p_circle_C);
    Circle & r_circle_D = circle_A;
    circle_A.GetInfo();
    circle_B.GetInfo();
    p_circle_C->GetInfo();
    r_circle_D.GetInfo();

    p_circle_C->SetValues(20, 30);
    p_circle_C->GetInfo();

    r_circle_D.SetValues(40, 60);
    p_circle_C->CompareCircle(r_circle_D.CopyCircle(circle_A));
    circle_A.GetInfo();

    Circle * p_circle_E = &circle_A;
    Circle * p_circle_F = new Circle;
    Circle * p_circle_G = new Circle;
    Circle * p_circle_H = new Circle;
    Circle * p_circle_I = new Circle;
    p_circle_G->SetValues(10, 5);

    cout << "------------------" << endl;
    p_circle_G->CompareCircle(*(p_circle_E->CopyCircle(p_circle_F)));
    p_circle_E->GetInfo();

    p_circle_E->CompareCircle(p_circle_E->CopyCircle_R(*p_circle_H));

    p_circle_E->CompareCircle(*(p_circle_E->CopyCircle_PR(p_circle_I)));

    delete p_circle_C;
    // delete p_circle_E;
    delete p_circle_F;
    delete p_circle_G;
    delete p_circle_H;
    delete p_circle_I;

    return 0;
}