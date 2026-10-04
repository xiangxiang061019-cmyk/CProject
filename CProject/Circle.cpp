#include "Circle.h"
	void Circle::set_c_r(double r1)
	{
		r = r1;
	}
	void  Circle::set_center(double cx, double cy)
	{
		c.set_c(cx, cy);
	}
	double  Circle::calculate_Location(point* p)
	{
		const double* c1 = c.show_c();
		const double* p1 = p->show_p();
		double res = (c1[0] - p1[0]) * (c1[0] - p1[0]) +
			(c1[1] - p1[1]) * (c1[1] - p1[1]);
		return res;
	}
	void  Circle::judge_Location(double res)
	{
		if (r * r > res)
		{
			cout << "点在圆内" << endl;
		}
		if (r * r == res)
		{
			cout << "点在圆上" << endl;
		}
		if (r * r < res)
		{
			cout << "点在圆外" << endl;
		}
	}
