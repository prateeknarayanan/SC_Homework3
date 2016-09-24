/*
 * BallShooter.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: prateeknarayanan
 */
#include <iostream>
#include "Shooter.h"
#include "Intake.h"
int main()
{
	Intake*intake = new Intake(3, 4);
	Shooter*shooter = new Shooter(1, 2);
	delete intake;
	delete shooter;
	return 0;

}



