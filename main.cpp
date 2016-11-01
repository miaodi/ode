#include "ForwardEulerSolver.h"
#include "RungeKuttaSolver.h"
#include "Newmark.h"
#include <cmath>

const double pi = 3.141592653589793238462643;

double f(double y, double t) {
    if (t <= 4.0)
        return (double)sin(pi * t / 4.0);
    else
        return 0;
}

int main() {
    Newmark a(20, 0, 20, 0, 0);
    a.SetDiscreteConst(.5, .25);
    a.SetOdeConst(1, 2, .4);
    a.setRHS(f);
    a.SolveEquation();
    a.SetIterationNumber(400);
    a.SolveEquation();
    a.SetIterationNumber(800);
    a.SolveEquation();
    a.SetIterationNumber(1600);
    a.SolveEquation();
    a.SetIterationNumber(3200);
    a.SolveEquation();
    a.SetIterationNumber(6400);
    a.SolveEquation();
    return 0;
}