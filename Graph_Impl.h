#pragma once


#include <iostream>
#include <vector>

using namespace std;

class Graph {
protected:
	int v; // number of vertices;
	vector<vector<int>> adj_list;

public:
	Graph(int v) {									//constructor
		this->v = v;								//using this to avoid confusion
		adj_list.resize(v);
	};

	void add_edge_directed(int tail, int head) {	// assuming each node is numbered as 0, 1, 2 so on
		// Directed graph
		adj_list[tail].push_back(head);
	};
	virtual void print_graph(int root);
	int create_graph_directed(int v);
	void print_adj_list(int root) {
		this->print_graph(root);
	}

};