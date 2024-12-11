#include "Subsystems/chassis.hpp"
using namespace okapi::literals;

const int8_t leftFront = 0;
const int8_t leftBack = 0;
const int8_t rightFront = -0;
const int8_t rightBack = -0;
Motor rf(rightFront, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor rb(rightBack, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

Motor lf(leftFront, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor lb(eftBack, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

std::shared_ptr<okapi::ChassisController> chassis = okapi::ChassisControllerBuilder()
  .withMotors({lf, lb}, {rf, rb})
  .withDimensions(okapi::AbstractMotor::gearset::green, {{4_in, 11.5_in}, okapi::imev5GreenTPR})
  .build();
