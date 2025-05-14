#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;


void solve()
{
    int n; cin>>n;

    int arr[n];
    int max_number = INT_MIN;
    int secound_max = INT_MIN;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if (arr[i]> max_number ){
            secound_max = max_number;
            max_number = arr[i];
        }else if (arr[i] > secound_max && max_number != arr[i]) {
            secound_max = arr[i];

        }
        cout<<"arr[i] = "<<arr[i]<<endl;
    }

    cout<<max_number<<endl;
    cout<<secound_max<<endl;
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

