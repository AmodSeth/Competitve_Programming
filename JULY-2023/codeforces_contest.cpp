// #include<bits/stdc++.h>
// #define int long long int
// #define pb push_back
// #define fin(i,n) for(int i=1;i<=n;i++)
// using namespace std;

// void solve()
// {
//  int n; cin>>n;
//  int size = n+1;
//  int count = 0;

// int arr[size];
// arr[0] = 0;

// for (int i = 1; i <= n; ++i)
// {
// 	int x; cin>>x;
// 	arr[i] = x;

// }



// fin(i,size) {
// 	if(i == arr[i]) count++;
// }

// if(count%2 == 1){
// 	//odd 
// 	cout<<count/2+1<<endl;
// }
// else{
// 	cout<<count/2<<endl;
// }

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
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve()
{
	//brute force
	int n;cin>>n;

    int count = 0;
    for(int i = 1;i<=n;i++){
    	if(n%i==0) break;
    	count++;
    }
cout<<count<<endl;




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