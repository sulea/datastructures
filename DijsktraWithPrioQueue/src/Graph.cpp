/*
 * Graph.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: sulea
 */

#include "Graph.h"
#include <iostream>

using namespace std;

Graph::Graph(int numberOfNodes)
{

	this->numberOfNodes = numberOfNodes;
	adj = new list<iPair>[numberOfNodes];
}

void Graph::addEdge(int node1, int node2, int weight)
{
	adj[node1].push_back(make_pair(node2, weight));
	adj[node2].push_back(make_pair(node1, weight));
}

void Graph::shortestPath(int sourceNodeId)
{
	// Type of elements: iPair, A vector of them, a comparator
	priority_queue<iPair, vector<iPair>, greater<iPair>> priorityQueue;

	// A vector for distances, initialized with infinities.
	// This array exists in the simple implementation too.
	vector<int> distances(numberOfNodes, INF);

	// Insert source in priority queue and initialize its distance with 0
	priorityQueue.push(make_pair(0, sourceNodeId));
	distances[sourceNodeId] = 0;

	while(!priorityQueue.empty())
	{
		// Extract the first node from priority queue - thats is with the minimum distance
		// and get the second element (the index of the node)
		int nearestNodeIndex = priorityQueue.top().second;
		priorityQueue.pop();

		// use i to get adjacents of the new green node
		list<iPair>::iterator it;
		for(it = adj[nearestNodeIndex].begin(); it != adj[nearestNodeIndex].end(); ++it)
		{
			int adjNodeIndex = (*it).first;
			int adjNodeCost = (*it).second;

			// if a shorted path for adjNodeIndex found through nearestNode
			if(distances[adjNodeIndex] > distances[nearestNodeIndex] + adjNodeCost)
			{
				//then updating index
				distances[adjNodeIndex] = distances[nearestNodeIndex] + adjNodeCost;
				priorityQueue.push(make_pair(distances[adjNodeIndex], adjNodeIndex));
			}
			// Print shortest distances stored in dist[]
			printf("Vertex   Distance from Source\n");

			for (int i = 0; i < numberOfNodes; ++i)
				printf("%d \t\t %d\n", i, distances[i]);
		}
	}

}

void Graph::print()
{
	list< pair<int, int> >::iterator i;
	for(int currentNode = 0; currentNode < numberOfNodes; currentNode++)
	{
        list<iPair>::iterator currentAdj;
		for (currentAdj = adj[currentNode].begin(); currentAdj != adj[currentNode].end(); currentAdj++)
		{
			// Print adjacences of current node.
			cout << "node " << currentNode << " connected to " << (*currentAdj).first << " with weight " << (*currentAdj).second << endl;
		}
	}
}

