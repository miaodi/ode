#include <iostream>
#include "ForwardEulerSolver.h"
#include "RungeKuttaSolver.h"

double f(double y,double t){
    return 1.0+t;
}
int main() {

    ForwardEulerSolver b(10,0,1,2);
    b.setRHS(f);
    b.SolveEquation();
    return 0;
}