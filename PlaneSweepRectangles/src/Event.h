/*
 * Event.h
 *
 *  Created on: Oct 16, 2018
 *      Author: sulea
 */
#ifndef EVENT_H_
#define EVENT_H_

#include <string>
using namespace std;

class Rectangle {
public:
	string name;
	Rectangle(string name);
};

class VerticalInterval {
public:
	int bottomY, topY;
	VerticalInterval(int bottomY, int topY);
};

class Event {
public:
	enum EventType { LeftEdge, RightEdge, Point };

	int x;
	EventType eventType;
	Rectangle * containerRect;

	Event(int x, EventType eventType, Rectangle* containerRect);
};


class EdgeEvent : public Event {
public:
	VerticalInterval * interval;

	EdgeEvent(int x, VerticalInterval* interval, EventType eventType, Rectangle* containerRect);
};


class PointEvent : public Event {
public:
	int y;

	PointEvent(int x, int y, Rectangle * containerRect);
};


#endif /* EVENT_H_ */
