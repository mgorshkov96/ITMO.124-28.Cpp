#include <iostream>

class Point {
public:
    Point() : x(0), y(0) {}
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    Point operator+ (const Point& point) const
    {
        Point newPoint(Point::x + point.x, Point::y + point.y);
        return newPoint;
    }

    Point operator+ (int val) const
    {
        Point newPoint(Point::x + val, Point::y + val);
        return newPoint;
    }

    void operator += (const Point& point)
    {
        *this = *this + point;
    }
private:
    int x; 
    int y;
};

int main()
{
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt2 += pt1;
    pt3 = pt1 + 5;

    return 0;
}
