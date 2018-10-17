/*
 * PlaneSweeper.cpp
 *
 *  Created on: Oct 17, 2018
 *      Author: sulea
 */

#include "PlaneSweeper.h"

PlaneSweeper::PlaneSweeper(list<Event*>* sweepLineEventList) {
	this->sweepLineEventList = sweepLineEventList;
}

void PlaneSweeper::sweeping() {
	list<Event*>::iterator it;
	for (it = sweepLineEventList->begin(); it != sweepLineEventList->end(); it++) {
		switch((*it)->eventType)
		{
			case Event::LeftEdge:
				addToSleeplineStatus();
				break;
			case Event::RightEdge:
				removeFromSleeplineStatus();
				break;
			case Event::Point:
				findIntervalInSleeplineStatus();
				break;
		}
	}
}

void PlaneSweeper::addToSleeplineStatus() {

}

void PlaneSweeper::removeFromSleeplineStatus() {

}

void PlaneSweeper::findIntervalInSleeplineStatus() {

}

PlaneSweeper::~PlaneSweeper() {
	// TODO Auto-generated destructor stub
}

