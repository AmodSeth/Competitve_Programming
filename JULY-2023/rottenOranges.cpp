int orangesRotting(vector<vector<int>>& grid) {
        int delrow[]={-1,+1,0,0};
        int delcol[]={0,0,-1,+1};
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        int cnf=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)cnf++;
            }
        }
        int tm=0;
        int c=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                    c++;
                }
            }
        }
        if(c!=cnf)return -1;
        return tm;
    }
};


 int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }
        int delrow[]={0,0,-1,1};
             int delcol[]={-1,1,0,0};
             int tm=0;
        while(q.size()!=0){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
            for(int i=0;i<4;i++){
                int newr=r+delrow[i];
                int newc=c+delcol[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]!=2 && grid[newr][newc]==1){
                    vis[newr][newc]=2;
                    q.push({{newr,newc},t+1});
                }
                
            }
            
            
            
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return tm;
    }

    class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int rows=grid.size();
        int columns=grid[0].size();
        int visited[rows][columns]={0};
        queue<pair<pair<int,int>,int>>q;
        for(int r=0;r<rows;r++){
            for(int c=0;c<columns;c++){
                if(grid[r][c]==2){
                    q.push({{r,c},0});
                    visited[r][c]=2;
                }
            }
        }
        int time=0;
        int deltrow[]={-1,0,1,0};
        int deltcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int column=q.front().first.second;
            int t=q.front().second;
            time=max(time,t);
            q.pop();
            for(int j=0;j<4;j++){
                int adjrow=row+deltrow[j];
                int adjcol=column+deltcol[j];
                if(adjrow>=0 && adjrow<rows && adjcol>=0 && adjcol<columns && visited[adjrow][adjcol]!=2 && grid[adjrow][adjcol]==1){
                    q.push({{adjrow,adjcol},t+1});
                    visited[adjrow][adjcol]=2;
                }
            }
            
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(grid[i][j]==1 && visited[i][j]!=2){
                    return -1;
                }
            }
        }
        return time;
        
    }
};
