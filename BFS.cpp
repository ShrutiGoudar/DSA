#include "BFS.h"
#include <queue>


void BFSGraph::print_adj_list(int root) {
	this->print_graph(root);
}

void BFSGraph::print_graph_BFS(int root)
{

	//Algorithm : 
	/*  Start at root 0 ( randomly pick or get from user)
	 *  add all vertices into queue that have a edge with root 0
	 *  pop 1st elem of queue and add to the end of queue all the vertices with edges starting at elem 1 
	 *  pop 2nd elem and repeat above step till all the elements from the queue are exhausted
	 *  
	 *  to avoid already visited vertice initial values to false, keep a list of visited veritices. push a vertice into the queue
	 *	if and only if the vertex is not already visited and set its visited list value to true
	 *
	*/

	vector<bool> visited(v, false); //initialize all vertices state as not visited
	int cur_ver = 0;

	queue<int> adj_list_que;
	visited[root] = true;
	adj_list_que.push(root);
	this->print_adj_list(cur_ver);
	while (!adj_list_que.empty()) {
		cur_ver = adj_list_que.front();
		//this->print_adj_list(cur_ver);
		adj_list_que.pop();		//remove from the queue
		cout << "Curent node: " << cur_ver << endl;

		//get all adj vertices
		for (auto adj : adj_list[cur_ver]) {
			if (!visited[adj]) {
				visited[adj] = true;
				adj_list_que.push(adj);
			}
			
		}
		
	}

	

}
