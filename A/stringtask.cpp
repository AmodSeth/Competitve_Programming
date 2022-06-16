#include<bits/stdc++.h>
// #define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

char inttochar(int n)
{
    return n + '0';

}

void solve()
{
    string s; cin>>s;
    vector<char> ans;
    set<char> st = {"A","a","e","E","I","i",'O','o','U','u'};
    int i = 0;
    while(s[i]!='\0'){
        if(st.find(inttochar(s[i])))
        {

            cout<<s[i]<<endl;
        }






        i++;
    }

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