#pragma once
#include <math.h>
#include <stdio.h>
#include "Common.h"

#ifdef TEST_MODE

    // Numerical Methods Tested:
    #define BISECTION_METHOD
    #define NEWTON_METHOD 
    #define FALSE_POSITION_METHOD
    #define SECANT_METHOD

    // Numerical Methods Definitions:
    #define PRECISION 1.0E-12
    #define MAX_ITERATIONS 100
#endif