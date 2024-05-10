#include "DFSGraph.h"

void DFSGraph::print_graph_DFS(int root) {

	/* ALgorithm: 
	* Maintain a vector for visited status of each node
	* Start with root node
	* Using recursion: 
	* Set the statuts if cur root as true and print it out. 
	* For each elem in the adjacency list of given root, check if current node is visited or not and recursively call DFS
	*/
	
	vector<bool> visited(v, false); // setting all vertices state as not visited
	this->print_adj_list(root);
	cout << "Starting DFS" << endl;
	//using recursion
	if (!visited[root]) {
		DFS_rec(root, visited);
	}
}

void DFSGraph::DFS_rec(int root, vector<bool> &visited) {
	visited[root] = true;
	cout << root << endl;

	for (auto i : adj_list[root]) {
		if (!visited[i]) {
			DFS_rec(i, visited);
			
		}
	}
}