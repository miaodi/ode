//
// Created by di miao on 10/8/16.
//

#include "RungeKuttaSolver.h"
using namespace std;
double *RungeKuttaSolver::SolveEquation() {
    double *out_put = new double[GetIterationNumber()+1];
    out_put[0] = GetInitialValue();
    for (int i = 1; i <= GetIterationNumber(); ++i) {
        double k1 = GetStepSize() * RightHandSide(out_put[i - 1], GetInitialTime() + (i - 1) * GetStepSize());
        double k2 = GetStepSize() *
                    RightHandSide(out_put[i - 1] + .5 * k1, GetInitialTime() + (i - 1 + .5) * GetStepSize());
        double k3 = GetStepSize() *
                    RightHandSide(out_put[i - 1] + .5 * k2, GetInitialTime() + (i - 1 + .5) * GetStepSize());
        double k4 = GetStepSize() * RightHandSide(out_put[i - 1] + k3, GetInitialTime() + i * GetStepSize());
        out_put[i]=out_put[i-1]+1.0/6*(k1+2*k2+2*k3+k4);
        cout<<out_put[i-1]<<" ";
    }
    cout<<out_put[GetIterationNumber()]<<endl;
    return out_put;
}

RungeKuttaSolver::RungeKuttaSolver(int N, double startTime, double endTime, double initialValue) {
    SetIterationNumber(N);
    SetInitialValue(initialValue);
    SetTimeInterval(startTime, endTime);
    SetStepSize();
}
