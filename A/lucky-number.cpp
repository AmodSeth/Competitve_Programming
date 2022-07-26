#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);

}

int lcm(int a,int b){
	return (a/gcd(a,b))*b;

}

void solve()
{
	int x,y; cin>>x>>y;


	if(x==1 || y==1) cout<<"YES"<<endl;
	else if(gcd(x,y)==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;





}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif

    int t=1;
    cin>>t;
    while(t--) solve();
}