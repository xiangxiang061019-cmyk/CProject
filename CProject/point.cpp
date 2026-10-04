#include "point.h"
//设计点类

	void point::set_c(double c_x,double c_y )
	{
		c[0] = c_x;
		c[1] = c_y;
	}
	const double* point::show_c(void)
	{
		return c;
	}

	void point::set_p(double c_x, double c_y)
	{
		p[0] = c_x;
		p[1] = c_y;
	}

	const double*point::show_p(void)
	{
		return p;
	}
