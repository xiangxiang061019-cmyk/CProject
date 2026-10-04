#pragma once
#include "iostream"
#include "point.h"
class Circle
{
public:
	void set_c_r(double r1);
	void set_center(double cx, double cy);
	double calculate_Location(point* p);
	void judge_Location(double res);
private:
	double r;
	point c;
};
