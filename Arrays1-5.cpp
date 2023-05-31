#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;


/* 
	2.Chewbaсca and Number
	/* 
	It is obvious that all the digits, 
which are greater than 4, need to be inverted. The only exception is 9, 
if it's the first digit.
 */
void solve()
{
    int n; cin>>n;
    string s = to_string(n);

    for (int i = 0; i < s.size(); ++i)
    {
    	int ch = s[i] - '0';
    	if(ch>4){
    		s[i] = ch + '0';
    	}

    }

    cout<<s<<endl;




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