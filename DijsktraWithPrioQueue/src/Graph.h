/*
 * Graph.h
 *
 *  Created on: Sep 11, 2018
 *      Author: sulea
 */
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f

#ifndef GRAPH_H_
#define GRAPH_H_

typedef pair<int, int> iPair;

class Graph {
	int numberOfNodes;

	// In a weighted graph, we need to store vertex
	// and weight pair for every edge
	list<iPair> *adj;

	//void printPair(iPair pair);

public :
	   Graph(int numberOfNodes); // Constructor

	   void addEdge(int node1, int node2, int weight);

	   void shortestPath(int sourceNodeId);

	   void print();
};

#endif /* GRAPH_H_ */
