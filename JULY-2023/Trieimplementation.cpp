#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

class Trie {
public:
struct TrieNode{
	TrieNode *child[26];
	bool isEnd = false;
};
TrieNode* makeNode(){
	TrieNode *newnode = new TrieNode();
	newnode->isEnd = false;
  for(int i = 0;i<26;i++) newnode->child[i] = NULL;
	return newnode;
}

TrieNode *root;




    Trie() {
        root = makeNode();
    }
    
    void insert(string word) {
      TrieNode* curr = root;
      for(int i = 0;i<word.size();i++){
          int index = word[i] -'a';
          if(curr->child[index] == NULL){
              //insert a new node
              curr->child[index] = makeNode();
          }
          curr = curr->child[index];
      } 
      curr->isEnd = true;
    }
    
    bool search(string word) {
       TrieNode *curr = root;
      for(int i = 0;i<word.size();i++){
          int index = word[i] -'a';
          if(curr->child[index] == NULL){
            //return false
            return false;
          }
          curr =curr->child[index];
      } 
      //return whether it exist or not
       curr->isEnd ? return true: return false;
    }
    
    bool startsWith(string prefix) {
       TrieNode *curr = root;
       int count = 0;
        for(int i = 0;i<prefix.size();i++){
        count++;
          int index = word[i] -'a';
          if(curr->child[index] == NULL){
            //return false
            return false;
          }curr =curr->child[index];
          
            
    }
    if(count == prefix.size()) return true;
    return false;
    }
  
};



void solve()
{
    
	trie();



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
