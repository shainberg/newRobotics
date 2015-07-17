/*
 * WaypointsManager.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: colman
 */

#include "WaypointsManager.h"


WaypointsManager::WaypointsManager()
{

}

WaypointsManager::WaypointsManager(std::vector <Position*> path)
{
	currWP = new Position(0,0);

	// Check the direction of the first point
	int diffX = (path[1]->getX() - path[0]->getX());
	int diffY = (path[1]->getY() - path[0]->getY());

	for(int i = 2; i < path.size(); i++)
	{
		// Check the direction of the next point
		int nextDiffX = (path[i]->getX() - path[i-1]->getX());
		int nextDiffY = (path[i]->getY() - path[i-1]->getY());

		// If the direction changed
		if (diffX != nextDiffX || diffY != nextDiffY)
		{
			// Insert the point to the waypoints list
			_waypointVector.push_back(path[i-1]);

			diffX = nextDiffX;
		    diffY = nextDiffY;
		}
	}
	currWP = _waypointVector[0];
}

Position* WaypointsManager::getNextWayPoint() {
	Position* nextWP = NULL;

	if (_wpIndex < _waypointVector.size())
	{
		_wpIndex += 1;
		nextWP = _waypointVector[_wpIndex];
		currWP = nextWP;
	}

	return nextWP;
}

WaypointsManager::~WaypointsManager()
{
	// TODO Auto-generated destructor stub
}
