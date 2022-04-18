#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
    public:
        Shape()
        {
            area = 0;
            girth = 0;
        }
        double GetArea();
        double GetGirth();
        void GetInfo();
    
    protected:
        void SetArea(const double &area);
        void SetGirth(const double &girth);

    private:
        double area;
        double girth;
};

class Circle : public Shape
{
    public:
        Circle()
        {
            radius = 0;
        }
        void SetRadius(const double &radius);

    private:
        double radius;
};

class Square : public Shape
{
    public:
        Square()
        {
            edge = 0;
            SetEdge(edge);
        }
        void SetEdge(const double &edge);

    private:
        double edge;
};
