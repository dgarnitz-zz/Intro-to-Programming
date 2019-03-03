#include "Tri.h"
#include <iostream>
#include <cmath>

// In Shapes.cpp, after Rect implementations
Tri::Tri(double x0, double y0,
	double x1, double y1,
	double x2, double y2) {
	set(x0, y0, x1, y1, x2, y2);
}
// Getter/setter
Point Tri::getCorner(unsigned int index) {
	// Note: we should validate index
	return mCorners[index];
}
void Tri::set(double x0, double y0,
	double x1, double y1,
	double x2, double y2) {
	mCorners[0].set(x0, y0);
	mCorners[1].set(x1, y1);
	mCorners[2].set(x2, y2);
}
// calcArea() on next slide (it's too long!)
// Calculate area of triangle
double Tri::calcArea() {
	// Formula for area (thanks Internet):
	// | (Ax(By-Cy) + Bx(Cy-Ay) + Cx(Ay-By)) |
	// | ----------------------------------- |
	// |                  2                  |

	Point A = mCorners[0];
	Point B = mCorners[1];
	Point C = mCorners[2];
	// i = Ax(By-Cy)
	double i = A.getX() * (B.getY() - C.getY());
	// j = Bx(Cy-Ay)
	double j = B.getX() * (C.getY() - A.getY());
	// k = Cx(Ay - By)
	double k = C.getX() * (A.getY() - B.getY());

	double area = (i + j + k) / 2;

	// std::abs is absolute value in <cmath>
	area = std::abs(area);
	return area;
}

double Tri::calcPerimeter()
{
    double perimeter = 0;
    perimeter = mCorners[0].getDistance(mCorners[1]) + mCorners[1].getDistance(mCorners[2]) + mCorners[2].getDistance(mCorners[0]);
    return perimeter; 
}



