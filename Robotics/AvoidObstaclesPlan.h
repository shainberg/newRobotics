/*
 * AvoidObstaclesPlan.h
 *
 *  Created on: Jul 17, 2015
 *      Author: colman
 */

#ifndef PLNOBSTACLEAVOID_H_
#define PLNOBSTACLEAVOID_H_

#include "Behaviors/Behavior.h"
#include "Behaviors/GoForward.h"
#include "Behaviors/TurnLeft.h"
#include "Behaviors/TurnRight.h"

class AvoidObstaclesPlan {
	Robot* _robot;
	Behavior** _behaviorsArr;
	Behavior* _startBehavior;
public:
	AvoidObstaclesPlan(Robot* robot);
	Behavior* startBehavior();
	virtual ~AvoidObstaclesPlan();
};

#endif /* AVOIDOBSRACLESPLAN_H_ */
