//
// Created by di miao on 10/8/16.
//

#ifndef ODE_RUNGEKUTTASOLVER_H
#define ODE_RUNGEKUTTASOLVER_H

#include "AbstractOdeSolver.h"
#include <iostream>

using namespace std;

class RungeKuttaSolver: public AbstractOdeSolver {
public:
    RungeKuttaSolver(int N, double startTime, double endTime, double initialValue);
    double* SolveEquation();
};


#endif //ODE_RUNGEKUTTASOLVER_H
