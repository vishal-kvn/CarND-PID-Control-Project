#include <iostream>
#include "PID.h"

using std::string;

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */

  this->Kp = Kp_;
  this->Ki = Ki_;
  this->Kd = Kd_;
  this->prev_cte = 0.0;
  this->int_cte = 0.0;

  std::cout << "Kp: " << this->Kp << std::endl;
  std::cout << "Ki: " << this->Ki << std::endl;
  std::cout << "Kd: " << this->Kd << std::endl;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  std::cout << "PREV CTE: " << prev_cte << std::endl;
  std::cout << "INT CTE: " << int_cte << std::endl;

  double diff_cte = cte - prev_cte;
  std::cout << "diff_cte: " << diff_cte << std::endl;
  prev_cte = cte;

  //steer_value = (-1 * Kp * cte) + (-1 * Kd * diff_cte) + (-1 * Ki * int_cte);
  p_error = (-1 * Kp * cte);
  i_error = (-1 * Ki * int_cte);
  d_error = (-1 * Kd * diff_cte);

  int_cte += cte;
  std::cout << "int_cte: " << int_cte << std::endl;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  //return 0.0;  // TODO: Add your total error calc here!
  return (p_error + i_error + d_error);
}
