//
// Created by miaodi on 10/7/16.
//

#include "ForwardEulerSolver.h"
#include <iostream>

using namespace std;

ForwardEulerSolver::ForwardEulerSolver(int N, double startTime, double endTime, double iValue) {
    SetIterationNumber(N);
    SetInitialValue(iValue);
    SetTimeInterval(startTime, endTime);
    SetStepSize();
}


double *ForwardEulerSolver::SolveEquation() {
    double *out_put = new double[GetIterationNumber()+1];
    out_put[0] = GetInitialValue();
    for (int i = 1; i <= GetIterationNumber(); ++i) {
        out_put[i]=out_put[i-1]+GetStepSize()*RightHandSide(out_put[i-1],GetInitialTime()+(i-1)*GetStepSize());
        cout<<out_put[i-1]<<" ";
    }
    cout<<out_put[GetIterationNumber()]<<endl;
    return out_put;
}

