class Solution {
public:
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool visited[301][301];
void dfs(int n,int m,int a,int b ,vector<vector<char>>&grid)
{
    visited[a][b]=true;
    for(int i=0;i<4;i++)
    {
        int aa=a+x[i];
        int bb=b+y[i];
        if(aa>=0 && bb>=0 && aa<n && bb<m)
        {
            if(grid[aa][bb]=='1' && !visited[aa][bb])
                dfs(n,m,aa,bb,grid);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
       int ans=0;
        int n=grid.size();
        int m=grid[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1' && !visited[i][j])
            {
                //cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
                dfs(n,m,i,j,grid);
                ans++;
            }
        }
    }
    return ans;
    }
};
//TC=O(M*N) SC=O(M*N)