#include "051_circle.h"
#include "051_point.h"


void Circle51::setR(int value)
{
    r = value;
}

int Circle51::getR()
{
    return r;
}

void Circle51::setCenter(Point51 p)
{
    center = p;
    cout << "Circle center µÄµØÖ·£º" << (long long)&center << endl;
}

Point51 Circle51::getCenter()
{
    return center;
}
