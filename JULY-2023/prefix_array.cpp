#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve()
{
   int n; cin>>n;
   int arr[n];
   int prefix[n];
   for (int i = 0; i < n; ++i)
   {
       int x; cin>>x;
       arr[i] = x;
       prefix[i] = x;

   }
   sort(arr,arr+n);
   for (int i = 1; i < n; ++i)
   {
        arr[i]+=arr[i-1];
       prefix[i]+=prefix[i-1];
   }

   int q; cin>>q;

   while(q--){
    int a,l,r; cin>>a>>l>>r;
    r--;
    l--;
    
    if(a==1){
        //prefix sum query
        
       if(l==0){
        cout<<prefix[r]<<"\n";
       }
       else{
        cout<<prefix[r] - prefix[l-1]<<endl;
       }
    }
    else{
        if(l==0){
        cout<<arr[r]<<"\n";
       }
       else{
        cout<<arr[r] - arr[l-1]<<endl;
       }




    }



   }




    




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