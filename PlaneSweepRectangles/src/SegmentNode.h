/*
 * SegmentNode.h
 *
 *  Created on: Oct 17, 2018
 *      Author: sulea
 */

#ifndef SEGMENTNODE_H_
#define SEGMENTNODE_H_

#include<bits/stdc++.h>
#include "Event.h"

class SegmentNode {
public:
	SegmentNode();
	virtual ~SegmentNode();

	int bottom, top;
	list<VerticalInterval> intervals;
	SegmentNode * leftNode;
	SegmentNode * rightNode;
};

#endif /* SEGMENTNODE_H_ */
