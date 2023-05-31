#include <bits./stdc++.h>

using namespace std;

class Graph{
    int numVertices;
    list<int> *l;
    
  public:
    Graph(int V){
    	numVertices = V;
    	l = new list<int>[numVertices];
    }


    void addEdge(int src, int dest, bool undir = true){
    	l[src].push_back(dest);
    	if(undir){
    		l[dest].push_back(src);
    	}

    }
    void print_adj(){
    	for (int i = 0; i < numVertices; ++i)
    	{
    		cout<<i<<"--->";
    		{
    			for(auto it:l[i]){
    				cout<<it<<" ";
    			}
    		}
    		cout<<endl;
    	}

    }
};

int main(){
	Graph g(6);
	g.addEdge(1,2);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.print_adj();

}