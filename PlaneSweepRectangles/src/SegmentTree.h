/*
 * segmentTree.h
 *
 *  Created on: Oct 17, 2018
 *      Author: sulea
 */

#include "SegmentNode.h"
using namespace std;

#ifndef SEGMENTTREE_H_
#define SEGMENTTREE_H_

class SegmentTree {
public:
	SegmentTree();
	virtual ~SegmentTree();

	void initialize(int countOfAtomals);
	void destroyTree();

private:
	void destroyTree(SegmentNode* leaf);

	SegmentNode * root;
};

#endif /* SEGMENTTREE_H_ */
