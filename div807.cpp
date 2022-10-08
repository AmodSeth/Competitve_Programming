// #include<bits/stdc++.h>
// #define int long long int
// #define pb push_back
// #define fin(i,n) for(int i=0;i<n;i++)
// using namespace std;

// void solve()
// {
//    int n; cin>>n;
//    int arr[n];
//    fin(i,n) cin>>arr[i];

//    bool zero = false;
//    int ans = 0;
//    for(int i = 0; i<n-1; i++){
//     if(arr[i]>0) zero = true;
//     if(arr[i]==0 && zero) ans++;
//     ans+=arr[i]; 
//    }
//    cout<<ans<<endl;


// }

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r", stdin);
//     freopen("output.txt","w", stdout);
// #endif

//     int t=1;
//     cin>>t;
//     while(t--) solve();
// }
#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<2*n;i++)
using namespace std;

// void solve()
// {
//     int n; cin>>n;
//     int x; cin>>x;
//     int arr[2*n];
//     fin(i,n) cin>>arr[i];
    
//     sort(arr,arr+2*n);
//     bool ans=true;
//      fin(i,n){
//         if(arr[n+i] - arr[i] < x) ans = false;

//      }
//      ans?cout<<"YES"<<endl:cout<<"NO"<<endl;
// }
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    bool ok = true;
    for (int i = 0; i < n; ++i)
        if (arr[n + i] - arr[i] < x) ok = false;
    cout << (ok ? "YES" : "NO") << "\n";
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