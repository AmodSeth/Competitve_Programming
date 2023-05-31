// // / * There are n astronauts numbered 0 to n-1, the member states of the UN are planning to send people to the moon.
// //  They want them to be from different countries. 
// //  You are given an array astronauts where astronauts[i] = [ui, vi],  
// //  it determines that astronaut ui and astronaut vi belong to the same 
// //  country. 
// // Determine how many pairs of astronauts from different countries they can choose from.*/

//  /* Approch - count the number of disconnected graphs and unka number of ways 


// */

// #include <bits/stdc++.h>
// #define fin(i,n) for(int i = 0;i<n;i++)


// using namespace std;



// class Graph{
// 	int numVertices;
// 	list<int> *l;

// public:

// 	Graph(int n){
// 		numVertices = n;
// 		l = new list<int>[numVertices];

// 	}

// 	void addEdge(int u,int v, bool undir = true){
// 		l[u].push_back(v);

// 		if(undir){
// 			l[v].push_back(u);
// 		}

// 	}

// 	void print_adj(){
// 		for (int i = 0; i < numVertices; ++i)
// 		{
// 			cout<<i<<"--->";

// 			for(auto it:l[i]){
// 				cout<<it<<" ";
// 			}
// 			cout<<endl;
// 		}


// 	}


// };

// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt","w", stdout);
// #endif

// 	Graph g(6);
// 	g.addEdge(1,2);
// 	g.addEdge(0,1);
// 	g.addEdge(0,4);
// 	g.addEdge(3,4);
// 	g.addEdge(4,5);
// 	g.addEdge(2,3);
// 	g.addEdge(3,5);

// 	g.print_adj();

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Graph{
	int numVertices;
	list<int> *l;

public:

	Graph(int n){
		numVertices = n;
		l = new list<int>[numVertices];

	}

	void addEdge(int u,int v, bool undir = true){
		l[u].push_back(v);

		if(undir){
			l[v].push_back(u);
		}

	}

	void print_adj(){
		for (int i = 0; i < numVertices; ++i)
		{
			cout<<i<<"--->";

			for(auto it:l[i]){
				cout<<it<<" ";
			}
			cout<<endl;
		}


	}
	int dfs_helper(int node,vector<bool> &visited){
	    
	    visited[node] = true;
	    int size = 1;
	    
	    for(auto it:l[node]){
	        if(!visited[it]){
	            size+=dfs_helper(it,visited);
	        }
	    }
	    
	    return size;
	    
	    
	    
	}
	
	
	int dfs(){
	    vector<bool> visited(numVertices,false);
	    int total_number_of_nodes = numVertices*(numVertices-1)/2;
	    
	    for (int i = 0; i < numVertices; i++) {
	        if(!visited[i]){
	            int connected_nodes = dfs_helper(i,visited);
	            total_number_of_nodes -= connected_nodes*(connected_nodes-1)/2;
	        }
	    }
	    return total_number_of_nodes;
	    
	}


};

int count_pairs(int n, vector<pair<int,int> > astro){
    //create a adjancy std::list<T> ;
    Graph g(n);
        
    for(auto it:astro){
        g.addEdge(it.first,it.second);
    }
    
    return g.dfs();
}