#pragma once
#include "Graph_Impl.h"

class BFSGraph : public Graph {
	// Available private  members from Base class
	//int v; // number of vertices;
	//vector<vector<int>> adj_list;
public:
	BFSGraph(int v) : Graph(v) {};
	void print_adj_list(int root);
	void print_graph_BFS(int root) ;  //Print BFS

};