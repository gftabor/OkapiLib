/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_CONTROLLERINPUT_HPP_
#define _OKAPI_CONTROLLERINPUT_HPP_

namespace okapi {
class ControllerInput {
  public:
  /**
   * Get the sensor value for use in a control loop. This method might be automatically called in
   * another thread by the controller.
   */
  virtual double controllerGet() = 0;
};
} // namespace okapi

#endif