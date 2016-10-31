//
// Created by miaodi on 10/31/16.
//

#include "Newmark.h"


Newmark::Newmark(int N, double startTime, double endTime, double iValue, double iSpeed) : AbstractOdeSolver(N,
                                                                                                            startTime,
                                                                                                            endTime,
                                                                                                            iValue),
                                                                                          initialSpeed(iSpeed) {}

void Newmark::SetConst(double r, double b) {
    gamma = r;
    beta = b;
}

double *Newmark::SolveEquation() {
    double *out_put = new double[GetIterationNumber()+1];
    double v_current;
    double d_current;
    double a_current;
    double v_pred;
    double d_pred;
    double a_pred;
    d_current=GetInitialValue();
    v_current = initialSpeed;
    for (int i = 1; i <= GetIterationNumber(); ++i) {
        a_current =
    }

    return out_put;
}
