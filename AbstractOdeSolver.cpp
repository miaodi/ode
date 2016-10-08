//
// Created by miaodi on 10/7/16.
//

#include "AbstractOdeSolver.h"

void AbstractOdeSolver::SetStepSize(){
    stepSize = (finalTime - initialTime) / static_cast<double>(iterationNumber);
}

void AbstractOdeSolver::SetTimeInterval(double t0, double t1){
    initialTime = t0;
    finalTime = t1;
    SetStepSize();
}

void AbstractOdeSolver::SetInitialValue(double y0){
    initialValue = y0;
}

void AbstractOdeSolver::SetIterationNumber(int IterationNumber) {
    iterationNumber = IterationNumber;
    SetStepSize();
}

void AbstractOdeSolver::setRHS(double (*RHS)(double, double)) {
    fn = RHS;
}


int AbstractOdeSolver::GetIterationNumber() const {
    return iterationNumber;
}

double AbstractOdeSolver::GetStepSize() const {
    return stepSize;
}

double AbstractOdeSolver::GetInitialTime() const {
    return initialTime;
}

double AbstractOdeSolver::GetFinalTime() const {
    return finalTime;
}

double AbstractOdeSolver::GetInitialValue() const {
    return initialValue;
}

double AbstractOdeSolver::RightHandSide(double y, double t) const {
    return fn(y,t);
}
