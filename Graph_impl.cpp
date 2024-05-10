#include "Graph_Impl.h"

void Graph::print_graph(int root) {
	for (int i = root; i < v; i++) {
		cout << "Adjacency list of vertex " << i << ": ";
		for (auto elem : adj_list[i]) {
			cout << elem << " , ";
		}
		cout << endl;
	}
}

int Graph::create_graph_directed(int v) {

	//cout << "Enter the number of vertices in Graph" << endl;
	//cin >> v;

	this->add_edge_directed(0, 1);
	this->add_edge_directed(0, 2);
	this->add_edge_directed(0, 3);
	this->add_edge_directed(1, 4);
	this->add_edge_directed(1, 5);
	this->add_edge_directed(2, 6);
	this->add_edge_directed(3, 7);
	return 0;
}