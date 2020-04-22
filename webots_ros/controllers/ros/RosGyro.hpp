// Copyright 1996-2020 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROS_GYRO_HPP
#define ROS_GYRO_HPP

#include <webots/Gyro.hpp>
#include "RosSensor.hpp"

using namespace webots;

class RosGyro : public RosSensor {
public:
  RosGyro(Gyro *gyroscope, Ros *ros);
  virtual ~RosGyro() { cleanup(); }

  ros::Publisher createPublisher() override;
  void publishValue(ros::Publisher publisher) override;
  void rosEnable(int samplingPeriod) override { mGyro->enable(samplingPeriod); }
  void rosDisable() override { cleanup(); }
  int rosSamplingPeriod() override { return mGyro->getSamplingPeriod(); }

private:
  void cleanup() { mGyro->disable(); }

  Gyro *mGyro;
};

#endif  // ROS_GYRO_HPP
