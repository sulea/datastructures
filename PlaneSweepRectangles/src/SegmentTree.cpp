/*
 * segmentTree.cpp
 *
 *  Created on: Oct 17, 2018
 *      Author: sulea
 */

#include "SegmentNode.h"
#include "SegmentTree.h"

SegmentTree::SegmentTree()
{
	root = NULL;
}

SegmentTree::~SegmentTree()
{
	destroyTree();
}

void SegmentTree::initialize(int countOfAtomals)
{

}

void SegmentTree::destroyTree()
{
	if(root != NULL)
	{
		this->destroyTree(root);
	}
}

void SegmentTree::destroyTree(SegmentNode* node)
{
	if(node != NULL)
	{
		destroyTree(node->leftNode);
		destroyTree(node->rightNode);
		node = NULL;
	}
}

