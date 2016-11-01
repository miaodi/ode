//
// Created by miaodi on 10/31/16.
//

#include "Newmark.h"

Newmark::Newmark(int N, double startTime, double endTime, double iValue, double iSpeed) : AbstractOdeSolver(N,
                                                                                                            startTime,
                                                                                                            endTime,
                                                                                                            iValue),
                                                                                          initialSpeed(iSpeed) {}

void Newmark::SetDiscreteConst(double r, double b) {
    gamma = r;
    beta = b;
}

double *Newmark::SolveEquation() {
    double *out_put = new double[GetIterationNumber() + 1];
    double v_current;
    double d_current;
    double a_current;
    double v_pred;
    double d_pred;
    d_current = GetInitialValue();
    out_put[0] = d_current;
    v_current = initialSpeed;
    a_current = 1.0 / m * (RightHandSide(0, 0) - c * v_current - k * d_current);
    double dt = GetStepSize();
    for (int i = 1; i <= GetIterationNumber(); ++i) {
        d_pred = d_current + dt * v_current + dt * dt / 2.0 * (1 - 2 * beta) * a_current;
        v_pred = v_current + (1 - gamma) * dt * a_current;
        a_current = (RightHandSide(0, GetInitialTime() + (i - 1) * dt) - c * v_pred - k * d_pred) /
                    (m + gamma * dt * c + beta * dt * dt * k);
        d_current = d_pred + beta * dt * dt * a_current;
        v_current = v_pred + gamma * dt * a_current;
        out_put[i] = d_current;
        std::cout<<out_put[i]<<" ";
    }
    std::cout<<std::endl;
    return out_put;
}

void Newmark::SetOdeConst(double mm, double kk, double cc) {
    m = mm;
    c = cc;
    k = kk;
};