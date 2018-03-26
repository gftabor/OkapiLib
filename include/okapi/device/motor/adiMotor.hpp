/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_ADIMOTOR_HPP_
#define _OKAPI_ADIMOTOR_HPP_

#include "api.h"
#include "okapi/control/controllerOutput.hpp"

namespace okapi {
class ADIMotor : public ControllerOutput {
  public:
  ADIMotor(const uint8_t iport);

  virtual ~ADIMotor();

  /**
   * Set the voltage to the motor.
   *
   * @param ivoltage voltage
   */
  virtual void move_voltage(const int32_t ivoltage) const;

  /**
   * Write the value of the controller output. This method might be automatically called in another
   * thread by the controller.
   */
  virtual void controllerSet(const double ivalue) override;

  protected:
  const pros::ADIMotor motor;
};
} // namespace okapi

#endif