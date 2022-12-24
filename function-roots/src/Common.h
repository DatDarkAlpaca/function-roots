#pragma once
#include <stdbool.h>

#define ROOT 0.9286263

// Functions:
double function(double x)
{
	return pow(x, 3) - sin(x);
}

double derivative(double x)
{
	return 3 * pow(x, 2) - cos(x);
}

// Intermediate value theorem:
bool validateInterval(double a, double b, double (*f)(double))
{
	return f(a) * f(b) < 0;
}

// Result fetching:
struct Results
{
	double root;
	unsigned int steps;
} typedef Results;

void printTestResults(const char* testIdentifier, const Results* const results, double expectedRoot)
{
	double error = fabs(expectedRoot - results->root);
	double relativeError = error / expectedRoot * 100;

	printf("* Test: %s\n", testIdentifier);
	printf("  - Root:            %lf\n", results->root);
	printf("  - Steps:           %d\n", results->steps);
	printf("  - Absolute Error:  %lf\n", error);
	printf("  - Relative Error:  %lf %%\n ", relativeError);
}

// REPL Input:
struct REPLInput
{
    double a;            // Lower Limit
    double b;            // Upper Limit
    double precision;
    unsigned k;          // Expected Iterations
    double expectedRoot;

} typedef REPLInput;

REPLInput fetchInput()
{
    REPLInput userInput;

    printf("Digite o valor de a: ");
    scanf("%lf", &userInput.a);

    printf("Digite o valor de b: ");
    scanf("%lf", &userInput.b);

    printf("Digite o valor da precisão: ");
    scanf("%lf", &userInput.precision);

    printf("Digite o valor de k: ");
    scanf("%u", &userInput.k);

    printf("Digite o valor da raiz a ser encontrada: ");
    scanf("%lf", &userInput.expectedRoot);

    return userInput;
}