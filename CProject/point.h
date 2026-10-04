#pragma once
#include "iostream"
using namespace std;
//设计点类
class point
{
public:
	void set_c(double c_x, double c_y);

	const double* show_c(void);

	void set_p(double c_x, double c_y);

	const double* show_p(void);
private:
	double c[2] = {};
	double p[2] = {};
};
