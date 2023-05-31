#include <bits./stdc++.h>

using namespace std;
/*O(V+E) */
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
    void bfs(int source){
    	/*  */
    	queue<int> q;
    	vector<bool> visited(numVertices,false);
    	q.push(source);
    	visited[source] = true;

    	while(!q.empty()){
    		int front = q.front();
    		cout<<front<<endl;
    		q.pop();

    		for(auto it:l[front]){
    			if(!visited[it]){
    				q.push(it);
    				visited[it] = true;
    			}


    		}
    	}
    	




    }
    void dfs_helper(int node,vector<bool> &visited){
    		visited[node] = true;
    		cout<<node<<" ";

    		for(auto it: l[node]){
    			if(!visited[it]){
    				dfs_helper(it,visited);
    			}
    		}

    	}
	void dfs(int source){
    	vector<bool>visited(numVertices,false);
    	dfs_helper(source,visited);
    }
    

};

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	Graph g(6);
	g.addEdge(1,2);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.print_adj();

	// g.bfs(1);

	g.dfs(1);

}