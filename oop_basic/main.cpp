#include <iostream>
#include "myclass.h"

using namespace std;

int main(int argc, char **argv)
{
    Circle circle_a;
    Circle circle_b;
    Circle * p_circle_c = new Circle;
    circle_a.SetValues(10, 10);
    circle_a.CopyCircle(circle_b);
    circle_b.CopyCircle(*p_circle_c);
    Circle & r_circle_d = circle_a;
    circle_a.GetInfo();
    circle_b.GetInfo();
    p_circle_c->GetInfo();
    r_circle_d.GetInfo();

    p_circle_c->SetValues(20, 30);
    p_circle_c->GetInfo();

    r_circle_d.SetValues(40, 60);
    p_circle_c->CompareCircle(r_circle_d.CopyCircle(circle_a));
    circle_a.GetInfo();

    Circle * p_circle_e = &circle_a;
    Circle * p_circle_f = new Circle;
    Circle * p_circle_g = new Circle;
    Circle * p_circle_h = new Circle;
    Circle * p_circle_i = new Circle;
    p_circle_g->SetValues(10, 5);

    cout << "------------------" << endl;
    p_circle_g->CompareCircle(*(p_circle_e->CopyCircle(p_circle_f)));
    p_circle_e->GetInfo();

    p_circle_e->CompareCircle(p_circle_e->CopyCircle_R(*p_circle_h));

    p_circle_e->CompareCircle(*(p_circle_e->CopyCircle_PR(p_circle_i)));

    delete p_circle_c;
    // delete p_circle_e;
    delete p_circle_f;
    delete p_circle_g;
    delete p_circle_h;
    delete p_circle_i;

    return 0;
}