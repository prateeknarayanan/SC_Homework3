/*
 * Shooter.cpp

 *
 *  Created on: Sep 17, 2016
 *      Author: prateeknarayanan
 */


#include "Shooter.h"
#include<iostream>

Shooter::Shooter(int port):
shooterMotor(new SmartMotor(port)){


	void Shooter::shoot(){
		cout<<"Shooting";
		shooterMotor -> setSpeed(1);
		shooterMotor -> setSpeed(0);
	}
	Shooter::~Shooter;
	delete shooterMotor;
}

