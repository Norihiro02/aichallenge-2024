#include "../include/simple_pure_pursuit/pid.hpp"
PID::PID(){
}
void PID::setPID(double p,double i,double d,double intaval_time){
    this->P = p;
    this->I = i;
    this->D = d;
    this->Intaval_time = intaval_time;
    this->integral = 0;
    this->bf_diff = 0;
}
double PID::exec(double diff){
    double result = this->P * diff;
    result += this->D * (diff - this->bf_diff) / this->Intaval_time;
    this->integral += diff;
    result += this->I * this->integral;
    return result;
}