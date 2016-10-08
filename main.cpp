#include "ForwardEulerSolver.h"
#include "RungeKuttaSolver.h"

double f(double y,double t){
    return 1.0 + t + y;
}
int main() {
    RungeKuttaSolver a(15, 0, 1, 2);
    a.setRHS(f);
    a.SolveEquation();
    ForwardEulerSolver b(100, 0, 1, 2);
    b.setRHS(f);
    b.SolveEquation();
    return 0;
}