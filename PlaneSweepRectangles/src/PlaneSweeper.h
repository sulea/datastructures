/*
 * PlaneSweeper.h
 *
 *  Created on: Oct 17, 2018
 *      Author: sulea
 */

#ifndef PLANESWEEPER_H_
#define PLANESWEEPER_H_

#include<bits/stdc++.h>
#include "Event.h"

using namespace std;

class PlaneSweeper {
private:
	list<Event*> * sweepLineEventList;
	void addToSleeplineStatus();
	void removeFromSleeplineStatus();
	void findIntervalInSleeplineStatus();

public:
	PlaneSweeper(list<Event*> * sweepLineEventList);
	virtual ~PlaneSweeper();
	void sweeping();
};

#endif /* PLANESWEEPER_H_ */
