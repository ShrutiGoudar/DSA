#pragma once
#include "Graph_Impl.h"
#include <stack>
#include <vector>

class DFSGraph :
    public Graph
{
    /* Available private  members from Base class
      int v; // number of vertices;
      vector<vector<int>> adj_list;

	void add_edge_directed(int tail, int head);
	virtual void print_graph(int root);
	int create_graph_directed(int v);
    */
    void DFS_rec(int root, vector<bool> &visited);
public: 
    DFSGraph(int v) : Graph(v) {}; 
    void print_graph_DFS(int root);

};

