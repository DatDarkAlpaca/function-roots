#include <time.h>
#include <math.h>
#include <stdio.h>
#include <float.h>
#include <locale.h>
#include <assert.h>
#include <stdbool.h>

// Methods:
#include "root_finding/Newton.h"
#include "root_finding/Bisection.h"
#include "root_finding/FalsePosition.h"

// Tests:
#include "test/TestNewton.h"
#include "test/TestBisection.h"
#include "test/TestFalsePosition.h"
#include "test/TestSecant.h"

// Common:
#include "Common.h"

// UI:
void printHeader()
{
    printf("-= : Programa: Zero de Função : =-\n");
    printf(" * Dupla: Felipe e Paulo.\n");
    printf(" * f(x) = x^3 - sin(x)\n");
    printf("\n");
}

void repl()
{
    REPLInput userInput = fetchInput();

    printf("\n");

    // Bisection:
    Results results = bisection(userInput.a, userInput.b, function, userInput.precision, userInput.k);
    printTestResults("Bisection Method", &results, userInput.expectedRoot);

    printf("\n");

    // False-Position:
    results = falsePosition(userInput.a, userInput.b, function, userInput.precision, userInput.k);
    printTestResults("False-Position Method", &results, userInput.expectedRoot);

    printf("\n");

    // Newton-Raphson:
    results = newton(userInput.a, function, derivative, userInput.precision, userInput.k);
    printTestResults("Newton-Raphson Method", &results, userInput.expectedRoot);

    printf("\n");

    // Secant:
    results = secant(userInput.a, userInput.b, function, userInput.precision, userInput.k);
    printTestResults("Secant Method", &results, userInput.expectedRoot);
}

int main() 
{
    setlocale(0, "");
    printHeader();

#ifdef TEST_MODE
   
    // Bisection:
    #ifdef BISECTION_METHOD
        printf("-=-=-= : Tested Using the Bisection Method : =-=-=-\n\n");

        Results b_test0Duration = bisection_range_closest();
        printTestResults("Bisection - Range: Closest (0.001)", &b_test0Duration, ROOT);
        printf("\n");

        Results b_test1Duration = bisection_range_close();
        printTestResults("Bisection - Range: Close (0.01)", &b_test1Duration, ROOT);
        printf("\n");

        Results b_test3Duration = bisection_range_unit();
        printTestResults("Bisection - Range: Unit (0.1)", &b_test3Duration, ROOT);
        printf("\n");

        Results b_test4Duration = bisection_range_far();
        printTestResults("Bisection - Range: Far (0.25)", &b_test4Duration, ROOT);
        printf("\n");

        Results b_test5Duration = bisection_range_farthest();
        printTestResults("Bisection - Range: Farthest (0.45)", &b_test5Duration, ROOT);
        printf("\n");
    #endif

    // False Position:
    #ifdef FALSE_POSITION_METHOD
        printf("-=-=-= : Tested Using the False Position Method : =-=-=-\n\n");

        Results f_test0Duration = false_position_range_closest();
        printTestResults("False Position - Range: Closest (0.001)", &f_test0Duration, ROOT);
        printf("\n");

        Results f_test1Duration = false_position_range_close();
        printTestResults("False Position - Range: Close (0.01)", &f_test1Duration, ROOT);
        printf("\n");

        Results f_test3Duration = false_position_range_unit();
        printTestResults("False Position - Range: Unit (0.1)", &f_test3Duration, ROOT);
        printf("\n");

        Results f_test4Duration = false_position_range_far();
        printTestResults("False Position - Range: Far (0.25)", &f_test4Duration, ROOT);
        printf("\n");

        Results f_test5Duration = false_position_range_farthest();
        printTestResults("False Position - Range: Farthest (0.45)", &f_test5Duration, ROOT);
        printf("\n");
    #endif

    // Newton-Raphson:
    #ifdef NEWTON_METHOD
        printf("-=-=-= : Tested Using the Newton-Raphson Method : =-=-=-\n\n");

        Results n_test0Duration = newton_range_closest();
        printTestResults("Newton - Range: Closest (0.001)", &n_test0Duration, ROOT);
        printf("\n");
        
        Results n_test1Duration = newton_range_close();
        printTestResults("Newton - Range: Close (0.01)", &n_test1Duration, ROOT);
        printf("\n");
        
        Results n_test3Duration = newton_range_unit();
        printTestResults("Newton - Range: Unit (0.1)", &n_test3Duration, ROOT);
        printf("\n");
        
        Results n_test4Duration = newton_range_far();
        printTestResults("Newton - Range: Far (0.25)", &n_test4Duration, ROOT);
        printf("\n");
        
        Results n_test5Duration = newton_range_farthest();
        printTestResults("Newton - Range: Farthest (0.45)", &n_test5Duration, ROOT);
        printf("\n");
    #endif

    // Secant: 
    #ifdef SECANT_METHOD
        printf("-=-=-= : Tested Using the Secant Method : =-=-=-\n\n");

        Results s_test0Duration = secant_range_closest();
        printTestResults("Secant - Range: Closest (0.001)", &s_test0Duration, ROOT);
        printf("\n");

        Results s_test1Duration = secant_range_close();
        printTestResults("Secant - Range: Close (0.01)", &s_test1Duration, ROOT);
        printf("\n");

        Results s_test3Duration = secant_range_unit();
        printTestResults("Secant - Range: Unit (0.1)", &s_test3Duration, ROOT);
        printf("\n");

        Results s_test4Duration = secant_range_far();
        printTestResults("Secant - Range: Far (0.25)", &s_test4Duration, ROOT);
        printf("\n");

        Results s_test5Duration = secant_range_farthest();
        printTestResults("Secant - Range: Farthest (0.45)", &s_test5Duration, ROOT);
        printf("\n");
    #endif

#else

    repl();

#endif
}