//  //9 presents

// #include<bits/stdc++.h>
// #define int long long int
// #define pb push_back
// #define fin(i,n) for(int i=0;i<n;i++)
// #define fin1(i,n) for(int i=1;i<=n;i++)
// using namespace std;

// void solve()
// {
//     int n; cin>>n;
//     int arr[n+1]; 
//     int res[n+1];

//     for (int i = 1; i <= n ; ++i)
//     {
//     	int x;cin>>x;
//     	res[x] = i;
//     }
//     fin1(i,n) cout<<res[i]<<endl;

   



// }

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r", stdin);
//     freopen("output.txt","w", stdout);
// #endif

//     int t=1;
//     // cin>>t;
//     while(t--) solve();
// }

// 10. beautiful matrix

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	int arr[5][5];
	int s,t;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1){
				 s=i;
				 t=j;

			} 

		}


	}

	cout<<abs(3-s)+abs(3-t)<<endl;
	
}