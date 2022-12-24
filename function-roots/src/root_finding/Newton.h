#pragma once
#include <stdio.h>
#include "Common.h"

Results newton(double xn, double (*f)(double), double (*derivative)(double), double tolerance, unsigned k)
{
	unsigned steps = 1;

	double h = f(xn) / derivative(xn);
	while (fabs(h) >= tolerance)
	{
		h = f(xn) / derivative(xn);
		xn = xn - h;
	}

	Results newtonResults;
	newtonResults.root = xn;
	newtonResults.steps = steps;

	return newtonResults;
}