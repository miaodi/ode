//
// Created by miaodi on 10/7/16.
//

#ifndef ODE_FORWARDEULERSOLVER_H
#define ODE_FORWARDEULERSOLVER_H

#include "AbstractOdeSolver.h"
#include <iostream>

using namespace std;

class AbstractOdeSolver;
class ForwardEulerSolver: public AbstractOdeSolver {
public:
    ForwardEulerSolver(int N, double startTime, double endTime, double initialValue);
    double* SolveEquation();
};


#endif //ODE_FORWARDEULERSOLVER_H
