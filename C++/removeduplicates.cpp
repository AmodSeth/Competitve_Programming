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
    int i = 0;
    int j = n-1;

    cout<<i<<j;
    while(i<j){
        cout<<"arr[i]"<<arr[i]<<endl;
        cout<<"arr[j]"<<arr[j]<<endl;
        if (arr [i] == arr[j]){
            cout<<"duplicates found"<<endl;
            return;
        }
        i++;
        j--;
    }
    cout<<"no duplicates"<<endl;
    return;

    










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

