#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        string s;
        vector<string> grid;
        for(int i=0;i<10;i++){
            cin>>s;
            grid.push_back(s);
        }

        vector<vector<int>> vis(10, vector<int> (10,0));

        int c1 = 0, r1 = 0, cn = 9, rn = 9, cntr = 1;
        while(c1 <= cn && r1 <= rn){
            for(int i=r1;i<=rn;i++){
                vis[i][c1] = cntr;
                vis[i][cn] = cntr;
            }

            for(int i=c1;i<=cn;i++){
                vis[r1][i] = cntr;
                vis[rn][i] = cntr;
            }

            r1++;c1++; rn--; cn--; cntr++;
        }

        int ans = 0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(grid[i][j] == 'X'){
                    ans += vis[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}