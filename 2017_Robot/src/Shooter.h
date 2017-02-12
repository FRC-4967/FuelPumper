/*
 * Shooter.h
 *
 *  Created on: Jan 16, 2017
 *      Author: Joey
 */

#ifndef SRC_SHOOTER_H_
#define SRC_SHOOTER_H_

#include <WPILib.h>
#include <CANTalon.h>
#include "RobotMap.h"


class Shooter {
	Joystick& m_joystick;
	CANTalon& m_shootWheel1;
	CANTalon& m_shootWheel2;
	CANTalon& m_indexMotor;
	Joystick& m_joystick2;
    DigitalOutput& m_aimLight;
public:
	Shooter(
		frc::Joystick &
		, CANTalon &
		, CANTalon &
		, CANTalon &
		, frc::Joystick &
		, DigitalOutput &
	);
	virtual ~Shooter();
	void TeleopPeriodic();

	//Want to allow it to activate shooter motors let
	//then get up to speed then activate index motor
	void Shoot();
    void Stop();
    void ReverseIndex();
    void Init();
    void AimLight(bool state);

};

#endif /* SRC_SHOOTER_H_ */
