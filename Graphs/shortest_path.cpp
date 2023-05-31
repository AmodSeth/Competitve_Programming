/*Bfs apporch in the undirected path */

/* like a visited array maintain a distance array and the parent
	array 

	Parent of a node can be extracted by the backtracking method


 */

#include <bits./stdc++.h>
#define fin(i,n) for (int i = 0; i < n; i++)

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

    /* single source shortest path in undirected graph */
    void bfs_shortest_distance(int source,int dest=-1){
    	
    	queue<int> q;
    	vector<bool> visited(numVertices,false);

    	//parent and distance array
    	vector<int> dist(numVertices,0);
    	vector<int> parent(numVertices);


    	//intialise it with -1;
    	fin(i,numVertices) parent[i] =-1;



    	q.push(source);
    	visited[source] = true;
    	parent[source] = source;
    	dist[source] = 0;


    	while(!q.empty()){
    		int front = q.front();
    		
    		q.pop();

    		for(auto it:l[front]){
    			if(!visited[it]){
    				q.push(it);
    				//parent and dist
    				parent[it] = front;
    				dist[it]= dist[front] + 1; 
    				visited[it] = true;
    			}


    		}




    	}
    	//print the distance array for shortest distance

    	fin(i,numVertices){
    		cout<<"shortest distance to node"<<i<<"is"<<dist[i]<<endl;
    	}

    	//print the sorce to destination path

    	if (dest !=-1)
    	{
    		int temp = dest;
    		while(temp!=source){
    			cout<<temp<<"--";
    			temp = parent[temp];
    		}
    		cout<<source<<endl;
    	}

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
	// g.print_adj();

	// g.bfs(1);

	// g.dfs(1);
	//without the dest printing
	// g.bfs_shortest_distance(1);

	//with
	g.bfs_shortest_distance(1,5);

}