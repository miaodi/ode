#include <iostream>
#include "ForwardEulerSolver.h"
double f(double y,double t){
    return 1.0+t;
}
int main() {
    ForwardEulerSolver a(10,0,1,2);
    a.setRHS(f);
    a.SolveEquation();
    a.SetIterationNumber(5);
    a.SolveEquation();
    cout<<a.GetFinalTime();
    return 0;
}