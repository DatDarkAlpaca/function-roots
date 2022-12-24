#pragma once
#include <stdio.h>
#include "Common.h"

Results bisection(double a, double b, double (*f)(double), double tolerance, unsigned k)
{
	Results bisectionResults;

	if (!validateInterval(a, b, f))
	{
		fprintf(stderr, "%s", "The values provided will never converge to a root.\n");

		bisectionResults.steps = 0;
		bisectionResults.root = 0;

		return bisectionResults;
	}

	unsigned int steps = 1;

	double midpoint = 0;
	while ((b - a) >= tolerance && steps < k)
	{
		midpoint = (a + b) / 2;

		if (f(midpoint) == 0.f)
			break;

		else if (f(midpoint) * f(a) < 0)
			b = midpoint;
		else
			a = midpoint;

		steps++;
	}

	// Results:
	bisectionResults.steps = steps;
	bisectionResults.root = midpoint;

	return bisectionResults;
}