/*
 * Event.cpp
 *
 *  Created on: Oct 16, 2018
 *      Author: sulea
 */

#include "Event.h"

Rectangle::Rectangle(string name) {
	this->name = name;
}

VerticalInterval::VerticalInterval(int bottomY, int topY) {
	this->bottomY = bottomY;
	this->topY = topY;
}

Event::Event(int x, EventType eventType,  Rectangle* containerRect) {
	this->x = x;
	this->eventType = eventType;
	this->containerRect = containerRect;
}

EdgeEvent::EdgeEvent(int x, VerticalInterval* interval, EventType eventType, Rectangle* containerRect)
	: Event(x, eventType, containerRect) {
	this->interval = interval;
}

PointEvent::PointEvent(int x, int y, Rectangle* containerRect)
	: Event(x, Event::Point, containerRect)
{
	this->y = y;
}


