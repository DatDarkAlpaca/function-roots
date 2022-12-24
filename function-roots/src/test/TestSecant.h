#pragma once
#include "Common.h"
#include "TestCommon.h"
#include "root_finding/Secant.h"

Results secant_range_closest()
{
    // Closest: the root is bound by outer limits of distance 0.001.

    Results results = secant(ROOT - 0.001, ROOT + 0.001, function, PRECISION, MAX_ITERATIONS);
    return results;
}

Results secant_range_close()
{
    // Close: the root is bound by outer limits of distance 0.01.

    Results results = secant(ROOT - 0.01, ROOT + 0.01, function, PRECISION, MAX_ITERATIONS);
    return results;
}

Results secant_range_unit()
{
    // Unit: the root is bound by outer limits of distance 0.1.

    Results results = secant(ROOT - 0.1, ROOT + 0.1, function, PRECISION, MAX_ITERATIONS);
    return results;
}

Results secant_range_far()
{
    // Far: the root is bound by outer limits of distance 0.25.

    Results results = secant(ROOT - 0.25, ROOT + 0.25, function, PRECISION, MAX_ITERATIONS);
    return results;
}

Results secant_range_farthest()
{
    // Farthest: the root is bound by outer limits of distance 0.45.

    Results results = secant(ROOT - 0.45, ROOT + 0.45, function, PRECISION, MAX_ITERATIONS);
    return results;
}
