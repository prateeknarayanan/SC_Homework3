/*
 * Motor.h
 *
 *  Created on: Sep 21, 2016
 *      Author: prateeknarayanan
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class Motor{
private:
        int port;
    public:
        Motor(int _port);
        void setSpeed(double speed);
        void wait(int amount);
};





#endif /* MOTOR_H_ */
