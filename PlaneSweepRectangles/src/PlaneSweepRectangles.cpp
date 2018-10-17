//============================================================================
// Name        : PlaneSweepRectangles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Event.h"
#include<bits/stdc++.h>

using namespace std;

Rectangle rect1("rectangle1");
Rectangle rect2("rectangle2");
Rectangle rect3("rectangle3");
Rectangle rect4("rectangle4");
Rectangle rect5("rectangle5");

list<Event*> *sweepLineEventList;

void initializeSweepLineEventList() {
	sweepLineEventList->push_back(
			new EdgeEvent(1, new VerticalInterval(1, 4), Event::LeftEdge,
					&rect1));
	sweepLineEventList->push_back(new PointEvent(2, 2, &rect1));
	sweepLineEventList->push_back(
			new EdgeEvent(5, new VerticalInterval(1, 4), Event::RightEdge,
					&rect1));
	sweepLineEventList->push_back(
			new EdgeEvent(6, new VerticalInterval(2, 6), Event::LeftEdge,
					&rect2));
	sweepLineEventList->push_back(new PointEvent(7, 3, &rect2));
	sweepLineEventList->push_back(
			new EdgeEvent(7, new VerticalInterval(5, 7), Event::LeftEdge,
					&rect3));
	sweepLineEventList->push_back(
			new EdgeEvent(8, new VerticalInterval(2, 6), Event::RightEdge,
					&rect2));
	sweepLineEventList->push_back(new PointEvent(9, 6, &rect3));
	sweepLineEventList->push_back(
			new EdgeEvent(10, new VerticalInterval(5, 7), Event::RightEdge,
					&rect3));
	sweepLineEventList->push_back(
			new EdgeEvent(13, new VerticalInterval(2, 7), Event::LeftEdge,
					&rect4));
	sweepLineEventList->push_back(
			new EdgeEvent(14, new VerticalInterval(3, 5), Event::LeftEdge,
					&rect5));
	sweepLineEventList->push_back(new PointEvent(14, 6, &rect4));
	sweepLineEventList->push_back(new PointEvent(15, 4, &rect5));
	sweepLineEventList->push_back(
			new EdgeEvent(16, new VerticalInterval(2, 7), Event::RightEdge,
					&rect4));
	sweepLineEventList->push_back(
			new EdgeEvent(17, new VerticalInterval(3, 5), Event::RightEdge,
					&rect5));
}



int main() {
	initializeSweepLineEventList();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}


