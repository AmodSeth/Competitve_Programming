#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve()
{
   int n; cin>>n;
   int arr[n];
   fin(i,n) cin>>arr[i];

   bool zero = false;
   int ans = 0;
   for(int i = 0; i<n-1; i++){
    if(arr[i]>0) zero = true;
    if(arr[i]==0 && zero) ans++;
    ans+=arr[i]; 
   }
   cout<<ans<<endl;


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