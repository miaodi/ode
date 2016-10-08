//
// Created by miaodi on 10/7/16.
//

#ifndef ODE_ABSTRACTODESOLVER_H
#define ODE_ABSTRACTODESOLVER_H

typedef double (*pfn)(double,double);
class AbstractOdeSolver {
    int iterationNumber;
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;
    pfn fn;
public:
    void SetIterationNumber(int iterationNumber);
    void SetStepSize();
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);
    void setRHS(double (*RHS)(double, double));

    int GetIterationNumber() const;
    double GetStepSize() const;
    double GetInitialTime() const;
    double GetFinalTime() const;
    double GetInitialValue() const;
    double RightHandSide(double y, double t) const;

    virtual double* SolveEquation() = 0;
};


#endif //ODE_ABSTRACTODESOLVER_H
