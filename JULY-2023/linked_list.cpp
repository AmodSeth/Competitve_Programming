#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int arr[],int n)
{
   
    int i;
    struct Node *t,*last;
    first = new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t= new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

void display(struct Node *p)
{
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;

    }

}
int count(struct Node *p)
{
    int c=0;
    
       
       while(p!=NULL)
       {
        c=c+1;
        p=p->next;
       }
        return c;

    

}

void solve()
{ 

 int Arr[]={3,8,9,6};
   create(Arr,4);
   display(first);
   cout<<"this is the count"<<count(first);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif

    int t=1;
    //cin>>t;
    while(t--) solve();
}