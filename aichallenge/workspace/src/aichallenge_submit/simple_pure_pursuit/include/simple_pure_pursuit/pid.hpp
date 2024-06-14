#ifndef PID_HPP
#define PID_HPP
class PID{
    private:
    double P;
    double I;
    double D;
    double Intaval_time;
    double integral;
    double bf_diff;

    public:
    PID();
    void setPID(double p,double i,double d,double intaval_time);
    double exec(double diff);
};
#endif