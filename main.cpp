#include "BFS.h"
#include "DFSGraph.h"


int main() {
	int v = 8;
	BFSGraph g(v);
	g.create_graph_directed(v);
	
	for (int i = 0; i < 10; i++) cout << "*";
	cout << endl;
	cout << "BF traversal of a directed graph" <<endl;
	g.print_graph_BFS(0);
	for (int i = 0; i < 10; i++) cout << "*";
	cout << "\n\n";
	
	for (int i = 0; i < 10; i++) cout << "*";
	cout << endl;
	cout << "DF traversal of a directed graph" << endl;
	
	DFSGraph d(v);
	d.create_graph_directed(v);
	d.print_graph_DFS(0);

	for (int i = 0; i < 10; i++) cout << "*";
	cout << "\n\n";


	return 0;
}