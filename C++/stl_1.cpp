#include<bits/stdc++.h>

#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

void pairs()
{
    //storing pair {1,3}
    pair <int , int> p1 = {1,3};
    cout<<p1.first << " " << p1.second <<endl;
    //nested pairs {1,{3,4}}
    pair<int, pair<int,int>> p2 ={1,{3,4}};
    //print 4
    cout<< p2.second.second;
    //array of pairs
    cout<<endl;
    pair<int,int> arr[]= {{1,2}, {2,4}, {4,5}};
    //print 4 for this pair
    cout<<arr[2].first;

} 

void vectors()
{
     //making a vector of pairs

     vector<pair<int,int>> v1;

     //need to reserve the storage
     v1.reserve(5);

     for (int i = 0; i <5;i++){
        v1.push_back({i,1});
     }

    for(auto it:v1){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //end will be pointing at the address after the last address therefore v++

}

void solve()
{
  
   // pairs(); 

    vectors();









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

