#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	int n;
	cin>>n;


	if (n<=2)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	n%2==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
}