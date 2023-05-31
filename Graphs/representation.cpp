#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	int n,m;
	cin>>n>>m;
//creating the matrix
	int adj[n+1][m+1];
	for (int i = 0; i < m; ++i)
	{
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}

	return 0;



}