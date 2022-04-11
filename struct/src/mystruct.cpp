#include "mystruct.h"

void SetValues(Circle &object_circle, const double &radius, const double &height){
    object_circle.radius = radius;
    object_circle.height = height;
    object_circle.girth = radius * 2 * M_PI;
    object_circle.area = radius * radius * M_PI;
    object_circle.volume = object_circle.area * height;
}

void GetInfo(Circle &object_circle)
{
    cout << object_circle.radius << endl;
    cout << object_circle.height << endl;
    cout << object_circle.girth << endl;
    cout << object_circle.area << endl;
    cout << object_circle.volume << endl;
    cout << "---" << endl;
}

struct Circle SetASameCircle(Circle &target_circle, const Circle &original_circle)
{
    target_circle = original_circle;
    return target_circle;
}

void CompareCircle(const Circle &object_circle, const Circle &target_circle)
{
    if(object_circle.volume == target_circle.volume)        cout << "They are the same." << endl;
    else if(object_circle.volume < target_circle.volume)    cout << "The back one is larger." << endl;
    else cout << "The front one is larger." << endl;
}
