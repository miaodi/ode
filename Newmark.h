//
// Created by miaodi on 10/31/16.
//

#ifndef ODE_NEWMARK_H
#define ODE_NEWMARK_H

#include "AbstractOdeSolver.h"
#include <iostream>
class Newmark: public AbstractOdeSolver {
    double initialSpeed;
    double gamma;
    double beta;
    double m,k,c;
public:
    Newmark(int N, double startTime, double endTime, double initialValue, double initialSpeed);
    void SetDiscreteConst(double r, double b);
    void SetOdeConst(double mm, double kk, double cc);
    double* SolveEquation();
};


#endif //ODE_NEWMARK_H
