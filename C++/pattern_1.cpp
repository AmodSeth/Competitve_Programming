/*
1. for outer loop count the number of lines/rows
2. for the inner loop focus on the columns and connect it to the rows
3. first print them inside the innerloop
4. observe symmetry if possible (optional)




*/


/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;



void solve()
{
    int row,col;
    cin>>row>>col;


    for(int i = 1;i<=5;i++){
        for(int j = 1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
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

