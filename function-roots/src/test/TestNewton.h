#pragma once
#include "Common.h"
#include "TestCommon.h"
#include "root_finding/Newton.h"

#ifdef TEST_MODE
Results newton_range_closest()
{
    // Closest: the root is bound by outer limits of distance 0.001.

    Results results = newton(ROOT + 0.001, function, derivative, PRECISION, MAX_ITERATIONS);
    return results;
}

Results newton_range_close()
{
    // Close: the root is bound by outer limits of distance 0.01.

    Results results = newton(ROOT + 0.01, function, derivative, PRECISION, MAX_ITERATIONS);
    return results;
}

Results newton_range_unit()
{
    // Unit: the root is bound by outer limits of distance 0.1.

    Results results = newton(ROOT + 0.1, function, derivative, PRECISION, MAX_ITERATIONS);
    return results;
}

Results newton_range_far()
{
    // Far: the root is bound by outer limits of distance 0.25.

    Results results = newton(ROOT + 0.25, function, derivative, PRECISION, MAX_ITERATIONS);
    return results;
}

Results newton_range_farthest()
{
    // Farthest: the root is bound by outer limits of distance 0.45.

    Results results = newton(ROOT + 0.45, function, derivative, PRECISION, MAX_ITERATIONS);
    return results;
}
#endif