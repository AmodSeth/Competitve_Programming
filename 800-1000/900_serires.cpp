//900
#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
using namespace std;

void solve()

{

 

int n;
cin >> n;
vector<int> a;
int p = -1;
fin(i, n) {
    int x;
    cin >> x;
    if (x == 1 && p != -1)
        a.push_back(p);
    p = x;    
}
a.push_back(p);
cout << a.size() << endl;
for (int i: a)
    cout << i << " ";




}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif

    int t=1;
    // cin>>t;
    while(t--) solve();
}


