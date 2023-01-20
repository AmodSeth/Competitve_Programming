// A. Theatre Square

#include<bits/stdc++.h>
using namespace std;
int  main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	 long long m,n,a;
	 cin>>m>>n>>a;
 	
 	long long ans = ((m+a-1)/a);
 	ans = ans * ((n+a-1)/a);

 	cout<<ans<<endl;;

}